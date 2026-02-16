#include <iostream>
#include <cstdint>
#include <cstring>
#include <vector>
#include <set>

// Block header (16 bytes)
struct BlockHeader {
    size_t size;        // 8 bytes
    uint8_t is_free;    // 1 byte
    uint8_t padding[7]; // 7 bytes
};

class SIMDAllocator {
private:
    static constexpr size_t ALIGNMENT = 32;
    static constexpr size_t HEADER_SIZE = 16;
    
    uint8_t* pool;
    size_t pool_size;
    std::vector<void*> allocation_history;
    std::set<void*> valid_pointers;  // Track valid allocated pointers

    size_t align_size(size_t size) {
        if (size == 0) size = ALIGNMENT;
        return (size + ALIGNMENT - 1) & ~(ALIGNMENT - 1);
    }

    uint8_t* get_aligned_ptr(uint8_t* base) {
        uintptr_t addr = reinterpret_cast<uintptr_t>(base + HEADER_SIZE);
        uintptr_t aligned = (addr + ALIGNMENT - 1) & ~(ALIGNMENT - 1);
        return reinterpret_cast<uint8_t*>(aligned);
    }

    BlockHeader* find_header(void* ptr) {
        uint8_t* user_ptr = static_cast<uint8_t*>(ptr);
        uint8_t* search_ptr = user_ptr - ALIGNMENT;
        
        while (search_ptr >= pool) {
            BlockHeader* header = reinterpret_cast<BlockHeader*>(search_ptr);
            uint8_t* aligned = get_aligned_ptr(search_ptr);
            
            if (aligned == user_ptr) {
                // Check if block is already free
                if (header->is_free) {
                    return nullptr; // Double-free protection
                }
                return header;
            }
            search_ptr -= 16;
            if (search_ptr < pool) break;
        }
        return nullptr;
    }

    void compact() {
        uint8_t* current = pool;
        uint8_t* end = pool + pool_size;

        while (current < end) {
            BlockHeader* header = reinterpret_cast<BlockHeader*>(current);
            
            if (current + HEADER_SIZE > end || header->size == 0) break;

            if (header->is_free) {
                uint8_t* next = current + HEADER_SIZE + header->size;
                
                while (next < end) {
                    BlockHeader* next_header = reinterpret_cast<BlockHeader*>(next);
                    if (next + HEADER_SIZE > end || next_header->size == 0 || !next_header->is_free) {
                        break;
                    }
                    header->size += HEADER_SIZE + next_header->size;
                    next = current + HEADER_SIZE + header->size;
                }
            }

            current += HEADER_SIZE + header->size;
        }
    }

public:
    SIMDAllocator(size_t size) : pool_size(size) {
        pool = new uint8_t[pool_size];
        
        // Initialize 4 regions
        size_t region_size = pool_size / 4;
        for (int i = 0; i < 4; i++) {
            uint8_t* region_start = pool + i * region_size;
            BlockHeader* header = reinterpret_cast<BlockHeader*>(region_start);
            header->size = region_size - HEADER_SIZE;
            header->is_free = 1;
        }
    }

    ~SIMDAllocator() {
        delete[] pool;
    }

    void* allocate(size_t size) {
        size_t aligned_size = align_size(size);
        
        uint8_t* current = pool;
        uint8_t* end = pool + pool_size;

        while (current < end) {
            BlockHeader* header = reinterpret_cast<BlockHeader*>(current);
            
            if (current + HEADER_SIZE > end || header->size == 0) break;

            if (header->is_free && header->size >= aligned_size) {
                header->is_free = 0;
                
                // Calculate space needed including ensuring next header is aligned
                size_t space_for_next = header->size - aligned_size;
                
                if (space_for_next >= HEADER_SIZE + ALIGNMENT) {
                    header->size = aligned_size;
                    
                    uint8_t* next_block = current + HEADER_SIZE + aligned_size;
                    BlockHeader* next_header = reinterpret_cast<BlockHeader*>(next_block);
                    next_header->size = space_for_next - HEADER_SIZE;
                    next_header->is_free = 1;
                }
                
                void* result = get_aligned_ptr(current);
                allocation_history.push_back(result);
                valid_pointers.insert(result);
                return result;
            }

            current += HEADER_SIZE + header->size;  // Don't align when traversing
        }

        return nullptr;
    }

    void deallocate() {
        if (allocation_history.empty()) {
            std::cout << "Invalid pointer" << std::endl;
            return;
        }
        
        void* ptr = allocation_history.back();
        
        // Check if pointer is still valid (not already freed)
        if (valid_pointers.find(ptr) == valid_pointers.end()) {
            std::cout << "Invalid pointer" << std::endl;
            return;
        }
        
        BlockHeader* header = find_header(ptr);
        if (header == nullptr) {
            allocation_history.pop_back();
            valid_pointers.erase(ptr);
            std::cout << "Invalid pointer" << std::endl;
            return;
        }

        allocation_history.pop_back();
        valid_pointers.erase(ptr);
        header->is_free = 1;
        // compact();
    }

    void print_stats() {
        size_t total_allocated = 0;
        size_t num_blocks = 0;
        
        uint8_t* current = pool;
        uint8_t* end = pool + pool_size;

        while (current < end) {
            BlockHeader* header = reinterpret_cast<BlockHeader*>(current);
            
            if (current + HEADER_SIZE > end || header->size == 0) break;

            num_blocks++;
            if (!header->is_free) {
                total_allocated += header->size;
            }
            
            // Debug output
            // std::cerr << "Block " << num_blocks << ": size=" << header->size << " free=" << (int)header->is_free << std::endl;

            current += HEADER_SIZE + header->size;
        }
        
        size_t total_free = pool_size - total_allocated - (num_blocks * HEADER_SIZE) - 16;
        
        std::cout << total_allocated << " " << total_free << " " << num_blocks << std::endl;
    }
};

int main() {
    size_t pool_size;
    int num_commands;
    
    std::cin >> pool_size >> num_commands;
    
    SIMDAllocator allocator(pool_size);
    
    for (int i = 0; i < num_commands; i++) {
        char command;
        std::cin >> command;
        if (command == 'A') {
            size_t size;
            std::cin >> size;
            void* ptr = allocator.allocate(size);
            if (ptr) {
                std::cout << ptr << std::endl;
            } else {
                std::cout << "nullptr" << std::endl;
            }
        } else if (command == 'D') {
            allocator.deallocate();
        } else if (command == 'S') {
            allocator.print_stats();
        }
    }
    
    return 0;
}
