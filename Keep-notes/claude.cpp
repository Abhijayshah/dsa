Claude- https://claude.ai/public/artifacts/16c06f71-fc0b-41db-86bb-773aec88487c 
DSA C++ Code Patterns Cheat Sheet
📊 COUNTING LOGIC
Count Digits
int n = 12345, count = 0;
while (n > 0) {
    count++;
    n /= 10;
}

Use: Count total digits in a number.
Count Specific Digit
int n = 121, digit = 1, count = 0;
while (n > 0) {
    if (n % 10 == digit) count++;
    n /= 10;
}

Use: Count how many times a specific digit appears.
Count Array Elements (Condition)
vector<int> arr = {1, 2, 3, 4, 5};
int count = 0;
for (int x : arr) {
    if (x > 2) count++;  // any condition
}

Use: Count elements meeting a condition.
Frequency Map (Hash)
unordered_map<int, int> freq;
for (int x : arr) {
    freq[x]++;
}

Use: Track frequency of each element. Access with freq[key].
Character Frequency (String)
unordered_map<char, int> freq;
for (char c : str) {
    freq[c]++;
}

Use: Count character occurrences in a string.

🔄 NUMBER MANIPULATION
Reverse a Number
int n = 12345, rev = 0;
while (n > 0) {
    rev = rev * 10 + n % 10;
    n /= 10;
}

Use: Reverse digits of a number.
Check Palindrome Number
int original = n, rev = 0;
while (n > 0) {
    rev = rev * 10 + n % 10;
    n /= 10;
}
bool isPalindrome = (original == rev);

Use: Check if number reads same forwards/backwards.
Sum of Digits
int n = 12345, sum = 0;
while (n > 0) {
    sum += n % 10;
    n /= 10;
}

Use: Add all digits of a number.
Extract Digits to Vector
vector<int> digits;
while (n > 0) {
    digits.push_back(n % 10);
    n /= 10;
}
reverse(digits.begin(), digits.end());

Use: Store each digit separately for processing.

🧮 MATH UTILITIES
GCD (Greatest Common Divisor)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Use: Find largest number dividing both a and b.
LCM (Least Common Multiple)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

Use: Find smallest number divisible by both a and b.
Check Prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

Use: Determine if n is a prime number.
Power (a^b)
long long power(int a, int b) {
    long long result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

Use: Calculate a raised to power b.
Fast Power (Exponentiation)
long long fastPow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

Use: Efficiently compute a^b in O(log b) time.

📝 ARRAY & STRING TRAVERSAL
Two Pointer (Opposite Ends)
int left = 0, right = arr.size() - 1;
while (left < right) {
    // process arr[left] and arr[right]
    left++;
    right--;
}

Use: Palindrome check, reverse, pair sum problems.
Sliding Window (Fixed Size)
int windowSum = 0, k = 3;
for (int i = 0; i < arr.size(); i++) {
    windowSum += arr[i];
    if (i >= k - 1) {
        // process windowSum
        windowSum -= arr[i - k + 1];
    }
}

Use: Find max/min sum of k consecutive elements.
Sliding Window (Variable Size)
int left = 0, sum = 0;
for (int right = 0; right < arr.size(); right++) {
    sum += arr[right];
    while (sum > target) {
        sum -= arr[left];
        left++;
    }
    // process window [left, right]
}

Use: Subarray with sum <= target, longest substring problems.
Kadane's Algorithm (Max Subarray Sum)
int maxSum = arr[0], currSum = arr[0];
for (int i = 1; i < arr.size(); i++) {
    currSum = max(arr[i], currSum + arr[i]);
    maxSum = max(maxSum, currSum);
}

Use: Find maximum sum of any contiguous subarray.
Reverse Array/String
reverse(arr.begin(), arr.end());
// or manual:
for (int i = 0; i < arr.size() / 2; i++) {
    swap(arr[i], arr[arr.size() - 1 - i]);
}

Use: Reverse order of elements.
Reverse String In-Place
int i = 0, j = str.length() - 1;
while (i < j) {
    swap(str[i++], str[j--]);
}

Use: Reverse string without extra space.

🔍 SEARCHING & COMPARISON
Linear Search
int target = 5, index = -1;
for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == target) {
        index = i;
        break;
    }
}

Use: Find first occurrence of element.
Binary Search (Sorted Array)
int left = 0, right = arr.size() - 1, target = 5;
while (left <= right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) return mid;
    else if (arr[mid] < target) left = mid + 1;
    else right = mid - 1;
}
return -1;  // not found

Use: Search in sorted array in O(log n).
Find Min/Max
int minVal = *min_element(arr.begin(), arr.end());
int maxVal = *max_element(arr.begin(), arr.end());
// or manual:
int minVal = arr[0];
for (int x : arr) minVal = min(minVal, x);

Use: Find minimum or maximum element.
Check if Sorted
bool isSorted = true;
for (int i = 1; i < arr.size(); i++) {
    if (arr[i] < arr[i - 1]) {
        isSorted = false;
        break;
    }
}

Use: Verify if array is in ascending order.

🎯 COMMON PATTERNS
Nested Loop (All Pairs)
for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
        // process pair (i, j)
    }
}

Use: Check all pairs, find pair sum, duplicate detection.
Running Sum/Prefix Sum
vector<int> prefix(arr.size());
prefix[0] = arr[0];
for (int i = 1; i < arr.size(); i++) {
    prefix[i] = prefix[i - 1] + arr[i];
}

Use: Quick range sum queries: sum[l..r] = prefix[r] - prefix[l-1].
Running Product
int product = 1;
for (int x : arr) {
    product *= x;
}

Use: Calculate product of all elements (watch for overflow).
Check All Elements Match Condition
bool allPositive = true;
for (int x : arr) {
    if (x <= 0) {
        allPositive = false;
        break;
    }
}

Use: Validate all elements meet criteria.
Check Any Element Matches
bool hasNegative = false;
for (int x : arr) {
    if (x < 0) {
        hasNegative = true;
        break;
    }
}

Use: Check if at least one element meets condition.

🗂️ SETS & UNIQUE ELEMENTS
Remove Duplicates (Using Set)
set<int> unique(arr.begin(), arr.end());
vector<int> result(unique.begin(), unique.end());

Use: Get unique elements in sorted order.
Check Duplicate Exists
unordered_set<int> seen;
bool hasDuplicate = false;
for (int x : arr) {
    if (seen.count(x)) {
        hasDuplicate = true;
        break;
    }
    seen.insert(x);
}

Use: Detect if any element appears twice.
Intersection of Two Arrays
unordered_set<int> set1(arr1.begin(), arr1.end());
vector<int> intersection;
for (int x : arr2) {
    if (set1.count(x)) {
        intersection.push_back(x);
        set1.erase(x);  // avoid duplicates
    }
}

Use: Find common elements between two arrays.

🔤 STRING PATTERNS
Check Palindrome String
bool isPalin = true;
int i = 0, j = str.length() - 1;
while (i < j) {
    if (str[i++] != str[j--]) {
        isPalin = false;
        break;
    }
}

Use: Check if string reads same forwards/backwards.
Convert Case
// To lowercase
for (char &c : str) c = tolower(c);
// To uppercase
for (char &c : str) c = toupper(c);

Use: Normalize string case for comparison.
Count Vowels
int count = 0;
for (char c : str) {
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        count++;
    }
}

Use: Count vowels in a string.
Remove Spaces
str.erase(remove(str.begin(), str.end(), ' '), str.end());

Use: Remove all whitespace from string.
Check Anagram
sort(s1.begin(), s1.end());
sort(s2.begin(), s2.end());
bool isAnagram = (s1 == s2);

Use: Check if two strings are anagrams.

🎲 USEFUL TRICKS
Swap Without Temp
a = a + b;
b = a - b;
a = a - b;
// or XOR: a ^= b; b ^= a; a ^= b;

Use: Swap two numbers (prefer swap(a, b)).
Check Even/Odd
bool isEven = (n % 2 == 0);
bool isOdd = (n % 2 != 0);
// or bitwise: (n & 1) == 0 for even

Use: Determine parity of number.
Absolute Value
int absVal = abs(n);

Use: Get non-negative value.
Round/Floor/Ceil
double x = 3.7;
int rounded = round(x);  // 4
int down = floor(x);      // 3
int up = ceil(x);         // 4

Use: Convert floating point to integer with rounding.
Clear Bit / Set Bit
n &= ~(1 << i);  // clear i-th bit
n |= (1 << i);   // set i-th bit
bool isSet = (n & (1 << i)) != 0;  // check i-th bit

Use: Bit manipulation for flags/states.

📌 QUICK REFERENCES
Common Headers
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cmath>
using namespace std;

Input/Output Fast
ios_base::sync_with_stdio(false);
cin.tie(NULL);

Use: Speed up cin/cout for competitive programming.
INT_MAX / INT_MIN
#include <climits>
int maxInt = INT_MAX;  // 2147483647
int minInt = INT_MIN;  // -2147483648

Use: Boundary values for comparisons.

💡 Pro Tip: Use Ctrl+F in Google Keep to search keywords like "palindrome", "frequency", "two pointer", "gcd" to instantly find the pattern you need!

DSA Logic Categories - Master Structure for Google Keep
Based on your CodeHelp RED curriculum, here's a comprehensive category system optimized for searchable, reusable code snippets:

📚 TIER 1: FOUNDATION PATTERNS
1. Basic I/O & Variables
Input/output templates
Variable initialization patterns
Type conversion snippets
Fast I/O for competitive programming
2. Conditional Logic
If-else chains
Switch-case templates
Ternary operator patterns
Multiple condition checks
3. Loop Patterns
For loop variations (forward, backward, step)
While loop templates
Do-while patterns
Nested loop structures
Loop with break/continue
4. Operators & Bitwise
Arithmetic operations
Comparison patterns
Logical operators
Bitwise operations (set/clear/toggle/check bit)
Bit manipulation tricks

🔢 TIER 2: NUMBER & MATH OPERATIONS
5. Digit Manipulation
Count digits
Extract digits
Reverse number
Sum/product of digits
Check palindrome number
Remove specific digit
6. Number Properties
Even/odd check
Prime check
Perfect number
Armstrong number
Factorial patterns
Power calculation (iterative & fast)
7. Mathematical Utilities
GCD & LCM
Modulo arithmetic
Square root (binary search method)
2's complement
Sign handling
Absolute value
8. Divisors & Multiples
Count divisors
Find all divisors
Check divisibility
Find multiples

📊 TIER 3: ARRAY FUNDAMENTALS
9. Array Traversal Basics
Linear traversal (forward/backward)
Range-based for loop
Index-based access
Safe boundary checks
10. Array Search & Find
Linear search
Find min/max element
Find first/last occurrence
Search with condition
Count occurrences
11. Array Modification
Update elements
Swap elements
Shift/rotate array
Reverse array
In-place modifications
12. Frequency & Counting (Arrays)
Count specific elements
Frequency array/map
Count zeros/negatives/positives
Mode finding
13. Array Comparison & Validation
Check if sorted
Check all elements match condition
Check any element matches
Array equality

🎯 TIER 4: ADVANCED ARRAY PATTERNS
14. Two Pointer Technique
Opposite ends (palindrome, pair sum)
Same direction (fast-slow)
Partition patterns
Squeeze technique
15. Sliding Window
Fixed-size window
Variable-size window
Window with condition
Maximum/minimum in window
16. Prefix & Suffix
Prefix sum array
Suffix sum array
Prefix product
Range sum query
Running max/min
17. Subarray Patterns
All subarrays generation
Kadane's algorithm (max sum)
Subarray with given sum
Subarray count patterns
18. Array Sorting & Ordering
Sort ascending/descending
Custom comparator patterns
Partial sort
Stable vs unstable sort
19. Array Partitioning
Partition by condition
Dutch national flag (3-way partition)
Segregate 0s and 1s
Partition around pivot

🔠 TIER 5: STRING OPERATIONS
20. String Basics
String input/output
Character access
String length
String concatenation
String comparison
21. String Traversal & Modification
Character-by-character traversal
Reverse string
Remove spaces/characters
Replace characters
Convert case (upper/lower)
22. String Pattern Matching
Substring search
Check prefix/suffix
Pattern occurrence count
First/last occurrence
23. String Analysis
Palindrome check
Anagram check
Count vowels/consonants
Character frequency
Unique characters
24. String Parsing & Conversion
String to integer (atoi)
Integer to string
Split string by delimiter
Parse tokens
Trim whitespace

🗂️ TIER 6: HASHING & SETS
25. Hash Map Patterns
Frequency map
Index mapping
Count distinct elements
Two sum pattern
Group by key
26. Hash Set Operations
Check duplicate
Remove duplicates
Unique elements
Set intersection
Set union/difference
27. Custom Hashing
Custom hash function
Hash for pairs/tuples
Collision handling awareness

📐 TIER 7: MATRIX & 2D ARRAYS
28. Matrix Traversal
Row-wise traversal
Column-wise traversal
Diagonal traversal
Anti-diagonal traversal
Boundary traversal
29. Matrix Patterns
Spiral print
Wave print
Zigzag traversal
Layer-by-layer processing
30. Matrix Operations
Transpose matrix
Rotate matrix (90°, 180°)
Matrix multiplication
Row/column sum
Search in sorted matrix

🔍 TIER 8: SEARCHING ALGORITHMS
31. Linear Search Variants
Basic linear search
Search with condition
Search in range
Find all occurrences
32. Binary Search Basics
Iterative binary search
Recursive binary search
Search in rotated array
First/last occurrence
33. Binary Search Applications
Lower bound / upper bound
Peak element
Square root
Search in 2D matrix
Minimum in rotated array
34. Binary Search on Answer
Allocate minimum pages
Aggressive cows
Painter's partition
Book allocation
Wood cutting (EKO)

🔄 TIER 9: SORTING ALGORITHMS
35. Basic Sorting
Bubble sort
Selection sort
Insertion sort
Counting sort (for limited range)
36. Advanced Sorting
Merge sort (recursive)
Quick sort (divide & conquer)
In-place merge
Custom comparators

🔗 TIER 10: RECURSION PATTERNS
37. Recursion Basics
Base case template
Recursive call structure
Tail recursion
Multiple recursive calls
38. Recursion on Numbers
Factorial
Fibonacci
Power (a^b)
Sum of N numbers
Print digits
39. Recursion on Arrays
Check sorted
Find min/max
Linear search
Array sum
Print array
40. Recursion on Strings
Reverse string
Palindrome check
Remove character
Subsequences generation
41. Backtracking Foundations
Choice-explore-unchoose pattern
Include/exclude pattern
Permutations template
Combinations template
Subset generation

⚡ TIER 11: DIVIDE & CONQUER
42. Divide & Conquer Patterns
Divide into halves
Merge results
Conquer subproblems
Recurrence relation setup
43. DnC Applications
Merge sort logic
Quick sort partition
Maximum subarray (DnC approach)
Counting inversions

🔗 TIER 12: LINKED LIST OPERATIONS
44. LL Traversal & Access
Traverse linked list
Find length
Access nth node
Print list
45. LL Insertion & Deletion
Insert at head/tail/middle
Delete node
Delete at position
Delete by value
46. LL Reversal
Iterative reversal
Recursive reversal
Reverse in groups of K
Reverse between positions
47. LL Two Pointer
Fast-slow pointer (cycle detection)
Find middle node
Nth node from end
Check palindrome
48. LL Merge & Sort
Merge two sorted lists
Sort linked list
Merge K sorted lists

📚 TIER 13: STACKS
49. Stack Basics
Stack implementation (array/vector)
Push/pop/top operations
Check empty/full
Size tracking
50. Stack Applications
Balanced parentheses
Next greater element
Stock span
Histogram area
Infix/postfix conversion
51. Stack with Constraints
Min stack
Max stack
Stack with middle element
Two stacks in one array

📬 TIER 14: QUEUES
52. Queue Basics
Queue implementation (array/list)
Enqueue/dequeue
Front/rear operations
Circular queue
53. Queue Applications
First non-repeating character
Sliding window maximum (deque)
Recent counter
Level order traversal prep
54. Deque Patterns
Deque basics
Sliding window with deque
Front and back operations

🌳 TIER 15: TREE FUNDAMENTALS
55. Tree Node Structure
Binary tree node
Tree creation from array
Insert node patterns
56. Tree Traversals (DFS)
Inorder (iterative & recursive)
Preorder (iterative & recursive)
Postorder (iterative & recursive)
Morris traversal
57. Tree Traversals (BFS)
Level order traversal
Level order line-by-line
Zigzag level order
Vertical order
58. Tree Properties
Height/depth calculation
Count nodes
Check balanced
Diameter of tree
Check symmetric
59. Tree Path Problems
Root to leaf paths
Path sum
Ancestor finding
LCA (Lowest Common Ancestor)
60. Tree Views
Left view
Right view
Top view
Bottom view
Boundary traversal

🔍 TIER 16: BINARY SEARCH TREE
61. BST Basics
BST node structure
Insert in BST
Search in BST
Delete from BST
62. BST Validation & Properties
Validate BST
Find min/max in BST
Kth smallest/largest
Inorder successor/predecessor
63. BST Construction
Array to BST
Sorted list to BST
Preorder to BST
BST from inorder & preorder
64. BST Modifications
BST to sorted list
BST to greater tree
Flatten BST
Balance BST

🏔️ TIER 17: HEAPS & PRIORITY QUEUES
65. Heap Basics
Min heap / Max heap structure
Heapify operation
Insert in heap
Extract min/max
Build heap
66. Heap Applications
Kth largest/smallest
Top K frequent elements
Merge K sorted arrays
Sliding window maximum
Median in stream
67. Priority Queue Patterns
Custom comparator in PQ
Track min and max simultaneously
K-closest points

🗺️ TIER 18: MAPS & TRIES
68. Map Patterns
Frequency counting
Index mapping
Prefix sum with map
Two sum variants
Group by key
69. Trie Basics
Trie node structure
Insert word
Search word
Search prefix
Delete word
70. Trie Applications
Word search
Auto-complete
Longest common prefix
Replace words
Word break

💎 TIER 19: DYNAMIC PROGRAMMING
71. DP Fundamentals
Memoization template (top-down)
Tabulation template (bottom-up)
State transition patterns
Base case identification
72. 1D DP Patterns
Fibonacci-like problems
Climbing stairs
House robber
Jump game
Decode ways
73. 2D DP Patterns
Grid path problems
Unique paths
Minimum path sum
Longest common subsequence (LCS)
Edit distance
74. Knapsack Patterns
0/1 knapsack
Unbounded knapsack
Subset sum
Target sum
Partition equal subset
75. DP on Strings
Longest palindromic subsequence
Palindrome partitioning
Word break
Interleaving string
Distinct subsequences
76. DP on Stocks
Best time to buy/sell (all variants)
Transaction limit patterns
Cooldown patterns
77. DP on Trees
Tree DP state definition
Max sum of non-adjacent nodes
Diameter using DP

🕸️ TIER 20: GRAPH ALGORITHMS
78. Graph Representation
Adjacency list
Adjacency matrix
Edge list
Weighted graph representation
79. Graph Traversals
DFS (recursive)
DFS (iterative with stack)
BFS (with queue)
Multi-source BFS
80. Graph Components
Count connected components
Check if graph is connected
Find all components
Check bipartite
81. Shortest Path Algorithms
BFS for unweighted
Dijkstra's algorithm
Bellman-Ford
Floyd-Warshall
82. Cycle Detection
Cycle in directed graph (DFS)
Cycle in undirected graph (DFS)
Cycle using colors
Cycle in directed graph (BFS/Kahn's)
83. Topological Sort
Kahn's algorithm (BFS)
DFS-based topological sort
Check if topological order exists
84. Minimum Spanning Tree
Prim's algorithm
Kruskal's algorithm
Union-find (DSU) for Kruskal's
85. Advanced Graph Patterns
Strongly connected components (Kosaraju's/Tarjan's)
Bridges and articulation points
0-1 BFS
Multisource shortest path

🧩 TIER 21: ADVANCED TECHNIQUES
86. Greedy Patterns
Activity selection pattern
Interval scheduling
Fractional knapsack
Huffman coding concept
87. Segment Tree Basics
Build segment tree
Range query
Point update
Range update
88. Disjoint Set Union (DSU)
Union-find structure
Path compression
Union by rank/size
Cycle detection using DSU
89. Bit Manipulation Advanced
Count set bits
Power of 2 check
XOR tricks (find unique element)
Subset generation using bits
Brian Kernighan's algorithm

🛠️ TIER 22: UTILITY & HELPERS
90. STL Shortcuts
Common STL functions (sort, reverse, etc.)
Custom comparators
Lambda functions
Iterator patterns
91. Debugging Templates
Print array/vector
Print matrix
Print map/set
Debug macros
92. Common Edge Cases
Empty array/string handling
Single element handling
Negative number handling
Overflow prevention
NULL pointer checks
93. Optimization Tricks
Fast I/O
Space optimization in DP
Constant space patterns
Early termination conditions

📋 HOW TO USE THIS STRUCTURE IN GOOGLE KEEP
Organization Strategy:
Create one note per TIER (e.g., "TIER 3: Array Fundamentals")
Within each note, use headers for categories (e.g., "### 9. Array Traversal Basics")
Add snippets under each category with keywords in title
Use labels/tags like #arrays, #recursion, #dp for cross-referencing
Search Keywords to Add:
Include action words: "find", "count", "check", "reverse", "search"
Include data structure: "array", "string", "tree", "graph"
Include technique: "two-pointer", "sliding-window", "dp", "dfs", "bfs"
Example Note Structure:
Title: TIER 3: Array Fundamentals

### 9. Array Traversal Basics
[Snippet 1: Forward traversal]
[Snippet 2: Backward traversal]
...

### 10. Array Search & Find
[Snippet 1: Linear search]
[Snippet 2: Find max]
...


This structure covers 93 focused categories across 22 tiers, perfectly aligned with your CodeHelp curriculum and optimized for quick search and reuse in Google Keep!

📚 TIER 1: FOUNDATION PATTERNS
1. BASIC I/O & VARIABLES
Standard Input/Output
int n;
cin >> n;
cout << n << endl;

Use: Basic single variable input and output.
Multiple Input on Same Line
int a, b, c;
cin >> a >> b >> c;
cout << a << " " << b << " " << c << endl;

Use: Read/write multiple space-separated values.
Fast I/O (Competitive Programming)
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

Use: Speed up cin/cout. Add at start of main(). Don't mix with scanf/printf.
Read Until EOF
int n;
while (cin >> n) {
    // process n
}

Use: Read unknown number of inputs until end of file.
Read Entire Line with Spaces
string line;
getline(cin, line);

Use: Read a full line including spaces (after cin >> use cin.ignore() first).
Variable Initialization Patterns
int x = 0;                    // single init
int a = 1, b = 2, c = 3;      // multiple init
vector<int> arr(n, 0);        // array with n zeros
int arr[100] = {0};           // array init to zero

Use: Initialize variables safely to avoid garbage values.
Type Conversion (Casting)
// Implicit
int a = 5;
double b = a;  // int to double

// Explicit
double x = 3.7;
int y = (int)x;           // C-style cast
int z = static_cast<int>(x);  // C++ style

Use: Convert between data types safely.
String to Number Conversion
string s = "123";
int n = stoi(s);           // string to int
long l = stol(s);          // string to long
double d = stod(s);        // string to double

Use: Parse numeric strings to numbers.
Number to String Conversion
int n = 123;
string s = to_string(n);

Use: Convert numbers to strings for manipulation.
Precision Control for Output
#include <iomanip>
double pi = 3.14159265;
cout << fixed << setprecision(2) << pi;  // 3.14

Use: Control decimal places in floating-point output.

2. CONDITIONAL LOGIC
Basic If-Else
if (n > 0) {
    cout << "Positive";
} else {
    cout << "Not positive";
}

Use: Single condition check with alternative.
If-Else If-Else Chain
if (n > 0) {
    cout << "Positive";
} else if (n < 0) {
    cout << "Negative";
} else {
    cout << "Zero";
}

Use: Multiple mutually exclusive conditions.
Nested If-Else
if (age >= 18) {
    if (hasLicense) {
        cout << "Can drive";
    } else {
        cout << "Need license";
    }
} else {
    cout << "Too young";
}

Use: Check conditions that depend on previous conditions.
Switch-Case Template
int choice;
cin >> choice;
switch (choice) {
    case 1:
        cout << "Option 1";
        break;
    case 2:
        cout << "Option 2";
        break;
    case 3:
        cout << "Option 3";
        break;
    default:
        cout << "Invalid";
}

Use: Menu-driven programs or discrete value matching.
Switch with Multiple Cases
char grade;
cin >> grade;
switch (grade) {
    case 'A':
    case 'a':
        cout << "Excellent";
        break;
    case 'B':
    case 'b':
        cout << "Good";
        break;
    default:
        cout << "Invalid grade";
}

Use: Handle multiple cases with same logic (fallthrough).
Ternary Operator (Single Assignment)
int max = (a > b) ? a : b;

Use: Compact if-else for simple assignments.
Ternary Operator (Nested)
int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

Use: Find max of three numbers in one line (use sparingly).
Ternary for Output
cout << (n % 2 == 0 ? "Even" : "Odd");

Use: Conditional output without if-else block.
Multiple Conditions (AND)
if (age >= 18 && age <= 60 && hasID) {
    cout << "Eligible";
}

Use: All conditions must be true.
Multiple Conditions (OR)
if (day == "Saturday" || day == "Sunday") {
    cout << "Weekend";
}

Use: At least one condition must be true.
Short-Circuit Evaluation
if (ptr != NULL && ptr->value > 0) {
    // safe: checks ptr first
}

Use: Prevent errors by checking in order (left to right).

3. LOOP PATTERNS
For Loop (Forward)
for (int i = 0; i < n; i++) {
    cout << i << " ";
}

Use: Standard forward iteration from 0 to n-1.
For Loop (1 to N)
for (int i = 1; i <= n; i++) {
    cout << i << " ";
}

Use: Iterate from 1 to n (inclusive).
For Loop (Backward)
for (int i = n - 1; i >= 0; i--) {
    cout << i << " ";
}

Use: Reverse iteration from n-1 to 0.
For Loop (Custom Step)
for (int i = 0; i < n; i += 2) {
    cout << i << " ";  // even indices: 0, 2, 4...
}

Use: Skip elements (step by 2, 3, etc.).
Range-Based For Loop (Array/Vector)
vector<int> arr = {1, 2, 3, 4, 5};
for (int x : arr) {
    cout << x << " ";
}

Use: Iterate through all elements without index.
Range-Based For Loop (Reference)
for (int &x : arr) {
    x *= 2;  // modify original elements
}

Use: Modify elements in-place using reference.
While Loop
int i = 0;
while (i < n) {
    cout << i << " ";
    i++;
}

Use: Loop when iteration count unknown or condition-based.
While Loop (Input Validation)
int n;
cin >> n;
while (n < 0) {
    cout << "Enter positive number: ";
    cin >> n;
}

Use: Keep asking until valid input.
Do-While Loop
int i = 0;
do {
    cout << i << " ";
    i++;
} while (i < n);

Use: Execute at least once, then check condition.
Do-While (Menu Pattern)
int choice;
do {
    cout << "1. Option\n2. Exit\n";
    cin >> choice;
    // process choice
} while (choice != 2);

Use: Menu loops that run at least once.
Nested Loop (2D Iteration)
for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}

Use: Traverse 2D arrays/matrices.
Nested Loop (All Pairs)
for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
        // process pair (i, j)
    }
}

Use: Check all unique pairs without repetition.
Loop with Break
for (int i = 0; i < n; i++) {
    if (arr[i] == target) {
        cout << "Found at " << i;
        break;  // exit loop
    }
}

Use: Exit loop early when condition met.
Loop with Continue
for (int i = 0; i < n; i++) {
    if (arr[i] < 0) {
        continue;  // skip negatives
    }
    cout << arr[i] << " ";
}

Use: Skip current iteration, continue with next.
Infinite Loop with Break
while (true) {
    int n;
    cin >> n;
    if (n == -1) break;
    // process n
}

Use: Loop until sentinel value.

4. OPERATORS & BITWISE
Arithmetic Operators
int a = 10, b = 3;
int sum = a + b;        // 13
int diff = a - b;       // 7
int prod = a * b;       // 30
int quot = a / b;       // 3 (integer division)
int rem = a % b;        // 1 (modulo)

Use: Basic math operations.
Integer Division vs Float Division
int a = 7, b = 2;
int intDiv = a / b;           // 3
double floatDiv = (double)a / b;  // 3.5

Use: Get decimal result by casting to double.
Increment/Decrement Operators
int x = 5;
x++;    // post-increment: x = 6
++x;    // pre-increment: x = 7
x--;    // post-decrement: x = 6
--x;    // pre-decrement: x = 5

Use: Increase/decrease by 1. Pre vs post matters in expressions.
Compound Assignment
int x = 10;
x += 5;   // x = x + 5 → 15
x -= 3;   // x = x - 3 → 12
x *= 2;   // x = x * 2 → 24
x /= 4;   // x = x / 4 → 6
x %= 4;   // x = x % 4 → 2

Use: Shorthand for operations on same variable.
Comparison Operators
int a = 5, b = 10;
bool eq = (a == b);   // false (equal)
bool neq = (a != b);  // true (not equal)
bool gt = (a > b);    // false (greater)
bool lt = (a < b);    // true (less)
bool gte = (a >= b);  // false (greater or equal)
bool lte = (a <= b);  // true (less or equal)

Use: Compare values, returns true/false.
Logical Operators
bool a = true, b = false;
bool andOp = a && b;   // false (both must be true)
bool orOp = a || b;    // true (at least one true)
bool notOp = !a;       // false (negation)

Use: Combine multiple conditions.
Check Bit at Position i
int n = 5;  // binary: 101
int i = 2;
bool isSet = (n & (1 << i)) != 0;  // true (bit 2 is set)

Use: Check if i-th bit is 1 or 0.
Set Bit at Position i
int n = 5;  // binary: 101
int i = 1;
n = n | (1 << i);  // sets bit 1 → 111 (7)

Use: Turn i-th bit to 1.
Clear Bit at Position i
int n = 7;  // binary: 111
int i = 1;
n = n & ~(1 << i);  // clears bit 1 → 101 (5)

Use: Turn i-th bit to 0.
Toggle Bit at Position i
int n = 5;  // binary: 101
int i = 1;
n = n ^ (1 << i);  // toggles bit 1 → 111 (7)

Use: Flip i-th bit (0→1 or 1→0).
Check if Power of 2
bool isPowerOf2 = (n > 0) && ((n & (n - 1)) == 0);

Use: Efficient check using bit manipulation.
Count Set Bits (Brian Kernighan)
int count = 0;
while (n > 0) {
    n = n & (n - 1);
    count++;
}

Use: Count number of 1s in binary representation.
Swap Two Numbers (XOR)
a = a ^ b;
b = a ^ b;  // b = a
a = a ^ b;  // a = b

Use: Swap without temp variable (prefer swap(a, b)).
Get Rightmost Set Bit
int rightmost = n & -n;

Use: Isolate the rightmost 1 bit.
Check Even/Odd (Bitwise)
bool isEven = (n & 1) == 0;
bool isOdd = (n & 1) == 1;

Use: Faster than modulo for even/odd check.
Multiply/Divide by Power of 2
int n = 5;
int mult = n << 2;  // multiply by 4 (2^2) → 20
int div = n >> 1;   // divide by 2 (2^1) → 2

Use: Fast multiplication/division by powers of 2.
Clear All Bits from MSB to i
int mask = (1 << i) - 1;
n = n & mask;

Use: Keep only bits from 0 to i-1.
Clear All Bits from i to 0
int mask = ~((1 << (i + 1)) - 1);
n = n & mask;

Use: Keep only bits from i+1 onwards.

🔖 QUICK REFERENCE
Common Headers for TIER 1
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

Template Main Function
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // your code here
    
    return 0;
}

Debugging Print Macros
#define debug(x) cout << #x << " = " << x << endl;
// Usage: debug(n); prints "n = 5"


💡 Search Tips:
Use keywords: input, loop, if, switch, bit, set bit, swap
Combine: for backward, while validation, ternary max
Common: fast io, check even, power of 2

🔢 TIER 2: NUMBER & MATH OPERATIONS
5. DIGIT MANIPULATION
Count Digits in a Number

int n = 12345, count = 0;
while (n > 0) {
    count++;
    n /= 10;
}
// count = 5

Use: Find total number of digits in any integer.
Count Digits (Log Method)
int count = (n == 0) ? 1 : (int)log10(n) + 1;

Use: Fast digit count using logarithm (handle n=0 separately).
int n = 12345, count = 0; // Initialize number and counter
while (n > 0) { // Continue until all digits processed
    count++; // Increment digit count
    n /= 10; // Remove last digit by dividing by 10
}
// count = 5

Comparison
Feature
Loop Method
Log Method
Speed
Slower
Faster
Simplicity
More intuitive
Less intuitive
Special Cases
Works naturally
Need to handle n=0
Negative Numbers
Need abs()
Need abs()





Extract All Digits to Vector
vector<int> digits;
int n = 12345;
while (n > 0) {
    digits.push_back(n % 10);
    n /= 10;
}
reverse(digits.begin(), digits.end());
// digits = [1, 2, 3, 4, 5]

Use: Store each digit separately for processing.



vector<int> digits; // Create empty vector to store digits
int n = 12345; // Number to extract digits from
while (n > 0) { // Continue until all digits extracted
    digits.push_back(n % 10); // Get last digit using modulo and add to vector
    n /= 10; // Remove last digit by dividing by 10
}
reverse(digits.begin(), digits.end()); // Reverse to get correct order
// digits = [1, 2, 3, 4, 5]


Extract Digits Without Reverse
string s = to_string(n);
vector<int> digits;
for (char c : s) {
    digits.push_back(c - '0');
}

Use: Get digits in correct order using string conversion.
string s = to_string(n); // Convert number to string (e.g., 12345 → "12345")
vector<int> digits; // Create empty vector to store digits
for (char c : s) { // Loop through each character in string
    digits.push_back(c - '0'); // Convert char to int and add to vector
}


How c - '0' works:
'0' has ASCII value 48
'1' has ASCII value 49
'5' has ASCII value 53
So '5' - '0' = 53 - 48 = 5 (integer)
Example: n = 12345
to_string(12345) → "12345"
Loop iterations:
c='1': '1'-'0' = 49-48 = 1 → digits=[1]
c='2': '2'-'0' = 50-48 = 2 → digits=[1,2]
c='3': '3'-'0' = 51-48 = 3 → digits=[1,2,3]
c='4': '4'-'0' = 52-48 = 4 → digits=[1,2,3,4]
c='5': '5'-'0' = 53-48 = 5 → digits=[1,2,3,4,5]


Reverse a Number
int n = 12345, rev = 0;
while (n > 0) {
    rev = rev * 10 + n % 10;
    n /= 10;
}
// rev = 54321

Use: Reverse all digits of a number.
int n = 12345, rev = 0; // Initialize number and reversed result
while (n > 0) { // Continue until all digits processed
    rev = rev * 10 + n % 10; // Shift rev left and add last digit of n
    n /= 10; // Remove last digit from n
}
// rev = 54321

Step Execution:
Iteration
n
n % 10
rev * 10
rev * 10 + n % 10
New rev
New n
Initial
12345
-
-
-
0
12345
1
12345
5
0
0 + 5
5
1234
2
1234
4
50
50 + 4
54
123
3
123
3
540
540 + 3
543
12
4
12
2
5430
5430 + 2
5432
1
5
1
1
54320
54320 + 1
54321
0







Reverse with Overflow Check
int n = 12345, rev = 0;
while (n > 0) {
    if (rev > INT_MAX / 10) return 0; // overflow
    rev = rev * 10 + n % 10;
    n /= 10;
}

Use: Safe reversal preventing integer overflow.


int n = 12345, rev = 0; // Initialize number and reversed result
while (n > 0) { // Continue until all digits processed
    if (rev > INT_MAX / 10) return 0; // Check if next multiplication will overflow
    rev = rev * 10 + n % 10; // Build reversed number safely
    n /= 10; // Remove last digit
}

Why Overflow Check is Important:
INT_MAX = 2,147,483,647 (maximum 32-bit signed integer)
If we reverse a large number, rev * 10 might exceed INT_MAX

Example: reversing 1,999,999,999 would give 9,999,999,991 (OVERFLOW!)
Example: reversing 1,463,847,412 would give 2,147,483,641 (SAFE - within limit)

How the Check Works:
Before doing rev * 10, check if rev > INT_MAX / 10
If rev > 214,748,364, then rev * 10 will exceed INT_MAX
Return 0 to indicate overflow occurred



Sum of Digits
int n = 12345, sum = 0;
while (n > 0) {
    sum += n % 10;
    n /= 10;
}
// sum = 15

Use: Add all digits together.
int n = 12345, sum = 0; // Initialize number and sum
while (n > 0) { // Continue until all digits processed
    sum += n % 10; // Add last digit to sum
    n /= 10; // Remove last digit
}
// sum = 15


Product of Digits
int n = 1234, product = 1;
while (n > 0) {
    product *= (n % 10);
    n /= 10;
}
// product = 24

Use: Multiply all digits together.
int n = 1234, product = 1; // Initialize number and product (start with 1, not 0!)
while (n > 0) { // Continue until all digits processed
    product *= (n % 10); // Multiply product by last digit
    n /= 10; // Remove last digit
}
// product = 24


Check Palindrome Number
int original = n, rev = 0;
while (n > 0) {
    rev = rev * 10 + n % 10;
    n /= 10;
}
bool isPalindrome = (original == rev);

Use: Check if number reads same forwards and backwards.
int original = n, rev = 0; // Save original and initialize reversed number
while (n > 0) { // Continue until all digits processed
    rev = rev * 10 + n % 10; // Build reversed number
    n /= 10; // Remove last digit
}
bool isPalindrome = (original == rev); // Compare original with reversed




Count Specific Digit Occurrence
int n = 121212, digit = 1, count = 0;
while (n > 0) {
    if (n % 10 == digit) count++;
    n /= 10;
}
// count = 3

Use: Count how many times a digit appears.
int n = 121212, digit = 1, count = 0; // Initialize number, target digit, and counter
while (n > 0) { // Continue until all digits processed
    if (n % 10 == digit) count++; // If last digit matches target, increment count
    n /= 10; // Remove last digit
}
// count = 3


Find Largest Digit
int n = 584921, maxDigit = 0;
while (n > 0) {
    maxDigit = max(maxDigit, n % 10);
    n /= 10;
}
// maxDigit = 9

Use: Find the largest digit in a number.
int n = 584921, maxDigit = 0; // Initialize number and max (start with smallest digit 0)
while (n > 0) { // Continue until all digits processed
    maxDigit = max(maxDigit, n % 10); // Update max if current digit is larger
    n /= 10; // Remove last digit
}
// maxDigit = 9


Find Smallest Digit
int n = 584921, minDigit = 9;
while (n > 0) {
    minDigit = min(minDigit, n % 10);
    n /= 10;
}
// minDigit = 1

Use: Find the smallest digit in a number.
int n = 584921, minDigit = 9; // Initialize number and min (start with largest digit 9)
while (n > 0) { // Continue until all digits processed
    minDigit = min(minDigit, n % 10); // Update min if current digit is smaller
    n /= 10; // Remove last digit
}
// minDigit = 1


Remove Specific Digit
int n = 123456, removeDigit = 4, result = 0, place = 1;
while (n > 0) {
    int digit = n % 10;
    if (digit != removeDigit) {
        result += digit * place;
        place *= 10;
    }
    n /= 10;
}
reverse(to_string(result)); // if needed

Use: Remove all occurrences of a specific digit.



int n = 123456, removeDigit = 4, result = 0, place = 1; // Initialize number, digit to remove, result, and place value
while (n > 0) { // Continue until all digits processed
    int digit = n % 10; // Extract last digit
    if (digit != removeDigit) { // Check if digit should be kept
        result += digit * place; // Add digit to result at correct position
        place *= 10; // Move to next place value (1→10→100→1000...)
    }
    n /= 10; // Remove last digit
}
// result = 12356 (all 4's removed)


Swap First and Last Digit
int n = 12345;
int lastDigit = n % 10;
int digits = log10(n);
int firstDigit = n / pow(10, digits);
n = n % (int)pow(10, digits); // remove first
n = n / 10;                   // remove last
n = lastDigit * pow(10, digits) + n * 10 + firstDigit;
// result: 52341

Use: Swap the first and last digits of a number.
int n = 12345; // Initialize the number whose first and last digits need to be swapped
int lastDigit = n % 10; // Extract last digit using modulo operator (12345 % 10 = 5)
int digits = log10(n); // Calculate number of digits minus 1 (log10(12345) = 4.09... → 4)
int firstDigit = n / pow(10, digits); // Extract first digit by dividing by 10^digits (12345 / 10000 = 1)
n = n % (int)pow(10, digits); // Remove first digit (12345 % 10000 = 2345)
n = n / 10; // Remove last digit (2345 / 10 = 234)
n = lastDigit * pow(10, digits) + n * 10 + firstDigit; // Build new number: last digit at first position + middle digits + first digit at last position
// result: 52341 (5 at start, 234 in middle, 1 at end)





























































answer in this formate ---
Detailed Explanation - the same code - add comment to each line
Step-by-Step Execution - dry run
complete Working Code with Output: - to test in any online complier 





6. NUMBER PROPERTIES
Check Even or Odd
bool isEven = (n % 2 == 0);
bool isOdd = (n % 2 != 0);
// or bitwise: bool isEven = (n & 1) == 0;

Use: Determine if number is even or odd.
bool isEven = (n % 2 == 0); // Check if n is divisible by 2 (remainder is 0)
bool isOdd = (n % 2 != 0); // Check if n is NOT divisible by 2 (remainder is 1)
// or bitwise: bool isEven = (n & 1) == 0; // Bitwise AND with 1: if LSB is 0, number is even


Check Prime Number (Basic)
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

Use: Optimized prime check in O(√n).
bool isPrime(int n) {
    if (n <= 1) return false; // Numbers ≤ 1 are not prime (0, 1, negative numbers)
    if (n <= 3) return true; // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return false; // Eliminate multiples of 2 and 3
    for (int i = 5; i * i <= n; i += 6) { // Check divisors of form 6k±1 up to √n
        if (n % i == 0 || n % (i + 2) == 0) // Check if divisible by i or i+2
            return false; // Found a divisor, not prime
    }
    return true; // No divisors found, number is prime
}


Check Prime (Simple Version)
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

Use: Simple prime check for beginners.
bool isPrime(int n) {
    if (n <= 1) return false; // Numbers ≤ 1 are not prime (handles 0, 1, negatives)
    for (int i = 2; i * i <= n; i++) { // Check divisors from 2 up to √n
        if (n % i == 0) return false; // If n is divisible by i, it's not prime
    }
    return true; // No divisors found, n is prime
}








































Print All Primes up to N (Sieve of Eratosthenes)
vector<bool> isPrime(n + 1, true);
isPrime[0] = isPrime[1] = false;
for (int i = 2; i * i <= n; i++) {
    if (isPrime[i]) {
        for (int j = i * i; j <= n; j += i) {
            isPrime[j] = false;
        }
    }
}

Use: Find all primes up to n efficiently in O(n log log n).
Check Perfect Number
bool isPerfect(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }
    return sum == n && n != 1;
}

Use: Check if sum of divisors equals the number (e.g., 6, 28).
Check Armstrong Number (3-digit)
int n = 153, original = n, sum = 0;
while (n > 0) {
    int digit = n % 10;
    sum += digit * digit * digit;
    n /= 10;
}
bool isArmstrong = (sum == original);

Use: Check if sum of cubes of digits equals number (153 = 1³+5³+3³).
Check Armstrong Number (Any Digits)
int n = 9474, original = n, sum = 0;
int digits = log10(n) + 1;
while (n > 0) {
    int digit = n % 10;
    sum += pow(digit, digits);
    n /= 10;
}
bool isArmstrong = (sum == original);

Use: Armstrong check for any number of digits.
Factorial (Iterative)
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

Use: Calculate n! iteratively. Handle overflow for n > 20.
Factorial (Recursive)
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

Use: Recursive factorial calculation.
Power (Iterative)
long long power(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

Use: Calculate base^exp iteratively.
Fast Power (Exponentiation by Squaring)
long long fastPower(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp & 1) result *= base;
        base *= base;
        exp >>= 1;
    }
    return result;
}

Use: Calculate base^exp in O(log exp). Efficient for large exponents.
Power with Modulo (For Large Numbers)
long long powerMod(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

Use: Calculate (base^exp) % mod to prevent overflow.
Check Perfect Square
bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return root * root == n;
}

Use: Check if a number is a perfect square.

7. MATHEMATICAL UTILITIES
GCD (Greatest Common Divisor) - Euclidean Algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Use: Find largest number that divides both a and b.
GCD (Recursive)
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

Use: Recursive GCD implementation.
LCM (Least Common Multiple)
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;  // avoid overflow
}

Use: Find smallest number divisible by both a and b.
GCD of Array
int findGCD(vector<int>& arr) {
    int result = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        result = gcd(result, arr[i]);
        if (result == 1) return 1;
    }
    return result;
}

Use: Find GCD of multiple numbers.
Modulo Addition (Prevent Overflow)
long long MOD = 1e9 + 7;
long long modAdd(long long a, long long b) {
    return ((a % MOD) + (b % MOD)) % MOD;
}

Use: Add large numbers under modulo.
Modulo Multiplication
long long modMul(long long a, long long b, long long mod) {
    return ((a % mod) * (b % mod)) % mod;
}

Use: Multiply large numbers under modulo.
Modulo Subtraction
long long modSub(long long a, long long b, long long mod) {
    return ((a % mod) - (b % mod) + mod) % mod;
}

Use: Subtract under modulo (handle negatives).
Square Root (Integer - Binary Search)
int sqrtBinarySearch(int n) {
    if (n == 0) return 0;
    int low = 1, high = n, ans = 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (mid <= n / mid) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

Use: Find integer square root using binary search (avoids overflow).
Square Root (Newton's Method)
int sqrtNewton(int n) {
    if (n == 0) return 0;
    long long x = n;
    while (x * x > n) {
        x = (x + n / x) / 2;
    }
    return x;
}

Use: Fast square root using Newton-Raphson method.
Absolute Value
int absValue = abs(n);
long long absLong = abs(ll);
double absDouble = abs(d);

Use: Get non-negative value of any number.
Sign of a Number
int sign = (n > 0) ? 1 : (n < 0) ? -1 : 0;

Use: Get sign: 1 (positive), -1 (negative), 0 (zero).
2's Complement (Negative Representation)
int twosComplement(int n) {
    return ~n + 1;  // flip bits and add 1
}

Use: Convert positive to negative representation in binary.
Check if Two Numbers Have Opposite Signs
bool oppositeSign = ((a ^ b) < 0);

Use: XOR-based check for opposite signs.
Ceiling Division (Integer)
int ceilDiv(int a, int b) {
    return (a + b - 1) / b;
}

Use: Integer division rounding up.
Round to Nearest Integer
int rounded = round(3.7);  // 4
int down = floor(3.7);      // 3
int up = ceil(3.2);         // 4

Use: Different rounding strategies for floats.

8. DIVISORS & MULTIPLES
Count Divisors of N
int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            if (i != n / i) count++;
        }
    }
    return count;
}

Use: Count total divisors in O(√n).
Find All Divisors
vector<int> findDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) divisors.push_back(n / i);
        }
    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}

Use: Get all divisors in sorted order.
Sum of Divisors
int sumDivisors(int n) {
    int sum = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }
    return sum;
}

Use: Calculate sum of all divisors.
Check if N is Divisible by K
bool isDivisible = (n % k == 0);

Use: Simple divisibility check.
Check Divisibility by Multiple Numbers
bool divisibleByAll(int n, vector<int>& divisors) {
    for (int d : divisors) {
        if (n % d != 0) return false;
    }
    return true;
}

Use: Check if n is divisible by all numbers in array.
Find First N Multiples of K
vector<int> findMultiples(int k, int n) {
    vector<int> multiples;
    for (int i = 1; i <= n; i++) {
        multiples.push_back(k * i);
    }
    return multiples;
}

Use: Generate first n multiples of k.
Count Multiples of K in Range [1, N]
int countMultiples = n / k;

Use: Count how many multiples of k exist from 1 to n.
Find LCM of Multiple Numbers
int findLCM(vector<int>& arr) {
    int result = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        result = lcm(result, arr[i]);
    }
    return result;
}

Use: Find LCM of array elements.
Prime Factorization
vector<int> primeFactors(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) factors.push_back(n);
    return factors;
}

Use: Get all prime factors with repetition (e.g., 12 → [2,2,3]).
Count Prime Factors
int countPrimeFactors(int n) {
    int count = 0;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            count++;
            n /= i;
        }
    }
    if (n > 1) count++;
    return count;
}

Use: Count total prime factors (with repetition).
Distinct Prime Factors
int distinctPrimeFactors(int n) {
    int count = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            while (n % i == 0) n /= i;
        }
    }
    if (n > 1) count++;
    return count;
}

Use: Count unique prime factors.

🔖 QUICK REFERENCE
Common Headers for TIER 2
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

Useful Constants
const long long MOD = 1e9 + 7;
const long long INF = 1e18;
const double PI = 3.14159265358979;

Handle Large Factorials
// Use vector<int> for very large factorials
vector<int> multiply(vector<int> num, int x);
// Store result in array/vector


💡 Search Tips:
Keywords: digit, reverse, palindrome, prime, gcd, lcm, factorial
Specific: count divisors, sum digits, armstrong, power mod
Math: sqrt binary search, modulo, perfect square, prime factors

📊 TIER 3: ARRAY FUNDAMENTALS
9. ARRAY TRAVERSAL BASICS
Linear Traversal (Forward)
vector<int> arr = {1, 2, 3, 4, 5};
for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
}

Use: Access elements by index from start to end.
Linear Traversal (Backward)
for (int i = arr.size() - 1; i >= 0; i--) {
    cout << arr[i] << " ";
}

Use: Access elements from end to start.
Range-Based For Loop
for (int x : arr) {
    cout << x << " ";
}

Use: Iterate through all elements without index (read-only).
Range-Based Loop (Modify Elements)
for (int &x : arr) {
    x *= 2;  // doubles each element
}

Use: Modify elements in-place using reference.
Range-Based Loop (Const Reference - Efficient)
for (const int &x : arr) {
    cout << x << " ";  // read-only, no copy
}

Use: Efficient read-only access for large objects.
Traverse with Iterator
for (auto it = arr.begin(); it != arr.end(); it++) {
    cout << *it << " ";
}

Use: Iterator-based traversal (works with all STL containers).
Access Element Safely
if (i >= 0 && i < arr.size()) {
    cout << arr[i];
}

Use: Boundary check before accessing to prevent errors.
Access with at() (Automatic Bounds Check)
try {
    cout << arr.at(i);  // throws exception if out of bounds
} catch (out_of_range& e) {
    cout << "Index out of range";
}

Use: Built-in safety check (slower than []).
Traverse 2D Array
vector<vector<int>> matrix = {{1,2,3}, {4,5,6}};
for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[i].size(); j++) {
        cout << matrix[i][j] << " ";
    }
}

Use: Access 2D array elements row by row.
Traverse 2D Array (Range-Based)
for (auto &row : matrix) {
    for (int val : row) {
        cout << val << " ";
    }
}

Use: Cleaner 2D array traversal.

10. ARRAY SEARCH & FIND
Linear Search (Find First Occurrence)
int target = 5, index = -1;
for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == target) {
        index = i;
        break;
    }
}

Use: Find position of first occurrence (returns -1 if not found).
Linear Search (Using find)
auto it = find(arr.begin(), arr.end(), target);
int index = (it != arr.end()) ? (it - arr.begin()) : -1;

Use: STL-based search returning iterator.
Check if Element Exists
bool exists = (find(arr.begin(), arr.end(), target) != arr.end());

Use: Quick existence check.
Find Minimum Element
int minVal = *min_element(arr.begin(), arr.end());

Use: Get minimum value using STL.
Find Minimum Element (Manual)
int minVal = arr[0];
for (int i = 1; i < arr.size(); i++) {
    minVal = min(minVal, arr[i]);
}

Use: Manual min finding.
Find Minimum with Index
int minIndex = 0;
for (int i = 1; i < arr.size(); i++) {
    if (arr[i] < arr[minIndex]) {
        minIndex = i;
    }
}
// minVal = arr[minIndex]

Use: Get both minimum value and its position.
Find Maximum Element
int maxVal = *max_element(arr.begin(), arr.end());

Use: Get maximum value using STL.
Find Maximum (Manual)
int maxVal = arr[0];
for (int i = 1; i < arr.size(); i++) {
    maxVal = max(maxVal, arr[i]);
}

Use: Manual max finding.
Find Both Min and Max Together
auto result = minmax_element(arr.begin(), arr.end());
int minVal = *result.first;
int maxVal = *result.second;

Use: Get both min and max in one pass.
Find First Occurrence Index
auto it = find(arr.begin(), arr.end(), target);
int firstIndex = (it != arr.end()) ? (it - arr.begin()) : -1;

Use: Position of first occurrence.
Find Last Occurrence
int lastIndex = -1;
for (int i = arr.size() - 1; i >= 0; i--) {
    if (arr[i] == target) {
        lastIndex = i;
        break;
    }
}

Use: Find last occurrence by searching backwards.
Find All Occurrences
vector<int> indices;
for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == target) {
        indices.push_back(i);
    }
}

Use: Get positions of all occurrences.
Count Occurrences
int cnt = count(arr.begin(), arr.end(), target);

Use: Count how many times element appears.
Count Occurrences (Manual)
int cnt = 0;
for (int x : arr) {
    if (x == target) cnt++;
}

Use: Manual counting.
Search with Condition (First Element > K)
int index = -1;
for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > k) {
        index = i;
        break;
    }
}

Use: Find first element meeting custom condition.
Find Using Lambda (STL)
auto it = find_if(arr.begin(), arr.end(), [](int x) { return x > 10; });
int index = (it != arr.end()) ? (it - arr.begin()) : -1;

Use: Find first element matching complex condition.

11. ARRAY MODIFICATION
Update Single Element
arr[index] = newValue;

Use: Direct element update by index.
Update All Elements (Add K)
for (int &x : arr) {
    x += k;
}

Use: Apply same operation to all elements.
Update Elements Conditionally
for (int &x : arr) {
    if (x < 0) x = 0;  // replace negatives with 0
}

Use: Conditional modification.
Swap Two Elements
swap(arr[i], arr[j]);

Use: Exchange values at two positions.
Swap Adjacent Elements
for (int i = 0; i < arr.size() - 1; i += 2) {
    swap(arr[i], arr[i + 1]);
}

Use: Swap pairs of adjacent elements.
Reverse Array (STL)
reverse(arr.begin(), arr.end());

Use: Reverse entire array using STL.
Reverse Array (Manual)
int left = 0, right = arr.size() - 1;
while (left < right) {
    swap(arr[left++], arr[right--]);
}

Use: Manual two-pointer reversal.
Reverse Array Range
reverse(arr.begin() + l, arr.begin() + r + 1);

Use: Reverse elements from index l to r.
Rotate Array Left by K
int k = 2;
rotate(arr.begin(), arr.begin() + k, arr.end());

Use: Rotate array k positions to the left.
Rotate Array Right by K
int k = 2;
rotate(arr.begin(), arr.begin() + arr.size() - k, arr.end());

Use: Rotate array k positions to the right.
Rotate Left (Manual - Using Reversal)
int k = 2;
k = k % arr.size();
reverse(arr.begin(), arr.begin() + k);
reverse(arr.begin() + k, arr.end());
reverse(arr.begin(), arr.end());

Use: Efficient rotation using three reversals.
Shift Array Right by 1
int last = arr.back();
for (int i = arr.size() - 1; i > 0; i--) {
    arr[i] = arr[i - 1];
}
arr[0] = last;

Use: Circular shift right by one position.
Shift Array Left by 1
int first = arr[0];
for (int i = 0; i < arr.size() - 1; i++) {
    arr[i] = arr[i + 1];
}
arr.back() = first;

Use: Circular shift left by one position.
Fill Array with Value
fill(arr.begin(), arr.end(), value);

Use: Set all elements to same value.
Replace All Occurrences
replace(arr.begin(), arr.end(), oldVal, newVal);

Use: Replace all instances of oldVal with newVal.
Remove Element (Erase-Remove Idiom)
arr.erase(remove(arr.begin(), arr.end(), value), arr.end());

Use: Remove all occurrences of value from vector.

12. FREQUENCY & COUNTING (ARRAYS)
Count Specific Element
int cnt = count(arr.begin(), arr.end(), target);

Use: Count occurrences of specific value.
Frequency Map (Hash Map)
unordered_map<int, int> freq;
for (int x : arr) {
    freq[x]++;
}
// Access: freq[key]

Use: Count frequency of each unique element.
Frequency Array (For Small Range)
// If elements in range [0, maxVal]
int freq[1001] = {0};
for (int x : arr) {
    freq[x]++;
}

Use: Efficient frequency counting for limited range.
Count Zeros
int zeros = count(arr.begin(), arr.end(), 0);

Use: Count zero elements.
Count Negatives
int negatives = count_if(arr.begin(), arr.end(), [](int x) { return x < 0; });

Use: Count negative numbers.
Count Positives
int positives = count_if(arr.begin(), arr.end(), [](int x) { return x > 0; });

Use: Count positive numbers.
Count Even Numbers
int evens = count_if(arr.begin(), arr.end(), [](int x) { return x % 2 == 0; });

Use: Count even elements.
Count Odd Numbers
int odds = count_if(arr.begin(), arr.end(), [](int x) { return x % 2 != 0; });

Use: Count odd elements.
Count Elements Greater Than K
int cnt = count_if(arr.begin(), arr.end(), [k](int x) { return x > k; });

Use: Count elements meeting condition.
Find Mode (Most Frequent Element)
unordered_map<int, int> freq;
for (int x : arr) freq[x]++;
int mode = arr[0], maxFreq = 0;
for (auto &p : freq) {
    if (p.second > maxFreq) {
        maxFreq = p.second;
        mode = p.first;
    }
}

Use: Find element with highest frequency.
Count Distinct Elements
unordered_set<int> unique(arr.begin(), arr.end());
int distinctCount = unique.size();

Use: Count unique elements.
Count Duplicates
unordered_map<int, int> freq;
for (int x : arr) freq[x]++;
int duplicates = 0;
for (auto &p : freq) {
    if (p.second > 1) duplicates++;
}

Use: Count how many elements appear more than once.
Find All Duplicates
unordered_map<int, int> freq;
vector<int> duplicates;
for (int x : arr) freq[x]++;
for (auto &p : freq) {
    if (p.second > 1) duplicates.push_back(p.first);
}

Use: Get list of all duplicate elements.

13. ARRAY COMPARISON & VALIDATION
Check if Array is Sorted (Ascending)
bool isSorted = is_sorted(arr.begin(), arr.end());

Use: STL check for ascending order.
Check if Sorted (Manual)
bool isSorted = true;
for (int i = 1; i < arr.size(); i++) {
    if (arr[i] < arr[i - 1]) {
        isSorted = false;
        break;
    }
}

Use: Manual sorted check.
Check if Sorted Descending
bool isSortedDesc = is_sorted(arr.begin(), arr.end(), greater<int>());

Use: Check descending order.
Check Strictly Increasing
bool strictlyIncreasing = true;
for (int i = 1; i < arr.size(); i++) {
    if (arr[i] <= arr[i - 1]) {
        strictlyIncreasing = false;
        break;
    }
}

Use: Ensure each element is greater than previous (no duplicates).
Check All Elements Are Positive
bool allPositive = all_of(arr.begin(), arr.end(), [](int x) { return x > 0; });

Use: Verify all elements meet condition.
Check All Elements Equal
bool allEqual = all_of(arr.begin(), arr.end(), [&](int x) { return x == arr[0]; });

Use: Check if all elements are same.
Check Any Element is Negative
bool hasNegative = any_of(arr.begin(), arr.end(), [](int x) { return x < 0; });

Use: Check if at least one element meets condition.
Check No Element is Zero
bool noZero = none_of(arr.begin(), arr.end(), [](int x) { return x == 0; });

Use: Verify no element meets condition.
Check Array Equality
bool isEqual = (arr1 == arr2);

Use: Compare two vectors for exact match.
Check Array Equality (Manual)
bool isEqual = (arr1.size() == arr2.size());
if (isEqual) {
    for (int i = 0; i < arr1.size(); i++) {
        if (arr1[i] != arr2[i]) {
            isEqual = false;
            break;
        }
    }
}

Use: Manual element-by-element comparison.
Check if Array is Palindrome
bool isPalindrome = true;
int left = 0, right = arr.size() - 1;
while (left < right) {
    if (arr[left++] != arr[right--]) {
        isPalindrome = false;
        break;
    }
}

Use: Check if array reads same forwards and backwards.
Check if Array Contains Duplicates
unordered_set<int> seen;
bool hasDuplicate = false;
for (int x : arr) {
    if (seen.count(x)) {
        hasDuplicate = true;
        break;
    }
    seen.insert(x);
}

Use: Detect if any element appears twice.
Check if Arrays are Permutations
vector<int> a1 = arr1, a2 = arr2;
sort(a1.begin(), a1.end());
sort(a2.begin(), a2.end());
bool isPermutation = (a1 == a2);

Use: Check if arrays contain same elements (order doesn't matter).
Validate Array Size
if (!arr.empty() && arr.size() > 0) {
    // safe to process
}

Use: Check array is not empty before operations.

🔖 QUICK REFERENCE
Common Array Headers
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;

Array Initialization Patterns
vector<int> arr1(n);              // size n, default values
vector<int> arr2(n, 0);           // size n, all zeros
vector<int> arr3 = {1, 2, 3};     // initialize with values
vector<int> arr4(arr3);           // copy constructor

Common Array Operations
arr.size()           // get size
arr.empty()          // check if empty
arr.push_back(x)     // add to end
arr.pop_back()       // remove from end
arr.clear()          // remove all elements
arr.front()          // first element
arr.back()           // last element

Sorting Variations
sort(arr.begin(), arr.end());                    // ascending
sort(arr.begin(), arr.end(), greater<int>());    // descending
sort(arr.begin(), arr.end(), [](int a, int b) {  // custom
    return a > b;
});


💡 Search Tips:
Basic: traverse, forward, backward, range loop
Search: linear search, find min, find max, first occurrence
Modify: reverse, rotate, swap, shift, update
Count: frequency, count zeros, count negatives, mode
Validate: is sorted, all positive, has duplicate, palindrome


🎯 TIER 4: ADVANCED ARRAY PATTERNS
14. TWO POINTER TECHNIQUE
Two Pointers - Opposite Ends (Palindrome Check)
bool isPalindrome(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        if (arr[left] != arr[right]) return false;
        left++;
        right--;
    }
    return true;
}

Use: Check palindrome, reverse, pair sum in sorted array.
Two Pointers - Pair Sum (Sorted Array)
bool hasPairSum(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) return true;
        else if (sum < target) left++;
        else right--;
    }
    return false;
}

Use: Find if two elements sum to target in sorted array.
Two Pointers - Find All Pairs with Sum
vector<pair<int,int>> findPairs(vector<int>& arr, int target) {
    vector<pair<int,int>> pairs;
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            pairs.push_back({arr[left], arr[right]});
            left++; right--;
        } else if (sum < target) left++;
        else right--;
    }
    return pairs;
}

Use: Get all pairs that sum to target (sorted array).
Two Pointers - Remove Duplicates (In-Place)
int removeDuplicates(vector<int>& arr) {
    if (arr.empty()) return 0;
    int i = 0;
    for (int j = 1; j < arr.size(); j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;  // new length
}

Use: Remove duplicates from sorted array, return new length.
Fast-Slow Pointers (Find Middle)
int findMiddle(vector<int>& arr) {
    int slow = 0, fast = 0;
    while (fast < arr.size() - 1 && fast + 1 < arr.size()) {
        slow++;
        fast += 2;
    }
    return slow;  // middle index
}

Use: Find middle element (linked list simulation).
Fast-Slow Pointers (Detect Cycle Concept)
// For array with values as indices (find duplicate)
int findDuplicate(vector<int>& arr) {
    int slow = arr[0], fast = arr[0];
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);
    
    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

Use: Floyd's cycle detection for finding duplicate.
Three Pointers - Three Sum
vector<vector<int>> threeSum(vector<int>& arr, int target) {
    vector<vector<int>> result;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 2; i++) {
        int left = i + 1, right = arr.size() - 1;
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == target) {
                result.push_back({arr[i], arr[left], arr[right]});
                left++; right--;
            } else if (sum < target) left++;
            else right--;
        }
    }
    return result;
}

Use: Find triplets that sum to target.
Partition Array (Two Pointers)
void partitionEvenOdd(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        while (left < right && arr[left] % 2 == 0) left++;
        while (left < right && arr[right] % 2 != 0) right--;
        if (left < right) swap(arr[left], arr[right]);
    }
}

Use: Separate even numbers to left, odd to right.
Squeeze Technique (Remove Element)
int removeElement(vector<int>& arr, int val) {
    int i = 0;
    for (int j = 0; j < arr.size(); j++) {
        if (arr[j] != val) {
            arr[i] = arr[j];
            i++;
        }
    }
    return i;  // new length
}

Use: Remove all instances of val, return new size.
Container With Most Water Pattern
int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxWater = 0;
    while (left < right) {
        int h = min(height[left], height[right]);
        maxWater = max(maxWater, h * (right - left));
        if (height[left] < height[right]) left++;
        else right--;
    }
    return maxWater;
}

Use: Two pointer pattern for optimization problems.

15. SLIDING WINDOW
Fixed-Size Window - Maximum Sum
int maxSumWindow(vector<int>& arr, int k) {
    int windowSum = 0, maxSum = 0;
    for (int i = 0; i < arr.size(); i++) {
        windowSum += arr[i];
        if (i >= k - 1) {
            maxSum = max(maxSum, windowSum);
            windowSum -= arr[i - k + 1];
        }
    }
    return maxSum;
}

Use: Maximum sum of k consecutive elements.
Fixed-Size Window - Average
vector<double> avgWindow(vector<int>& arr, int k) {
    vector<double> result;
    int windowSum = 0;
    for (int i = 0; i < arr.size(); i++) {
        windowSum += arr[i];
        if (i >= k - 1) {
            result.push_back((double)windowSum / k);
            windowSum -= arr[i - k + 1];
        }
    }
    return result;
}

Use: Calculate average of each k-size window.
Fixed-Size Window - Find Maximum in Each Window
vector<int> maxInWindow(vector<int>& arr, int k) {
    vector<int> result;
    for (int i = 0; i <= arr.size() - k; i++) {
        int maxVal = *max_element(arr.begin() + i, arr.begin() + i + k);
        result.push_back(maxVal);
    }
    return result;
}

Use: Get max element in each window (simple approach).
Variable-Size Window - Max Sum <= K
int maxSubarraySum(vector<int>& arr, int k) {
    int maxLen = 0, sum = 0, left = 0;
    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];
        while (sum > k) {
            sum -= arr[left];
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

Use: Longest subarray with sum <= k.
Variable-Size Window - Minimum Length with Sum >= K
int minSubarrayLen(int k, vector<int>& arr) {
    int minLen = INT_MAX, sum = 0, left = 0;
    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];
        while (sum >= k) {
            minLen = min(minLen, right - left + 1);
            sum -= arr[left];
            left++;
        }
    }
    return minLen == INT_MAX ? 0 : minLen;
}

Use: Shortest subarray with sum >= k.
Longest Substring with K Distinct Characters
int longestKDistinct(string s, int k) {
    unordered_map<char, int> freq;
    int maxLen = 0, left = 0;
    for (int right = 0; right < s.length(); right++) {
        freq[s[right]]++;
        while (freq.size() > k) {
            freq[s[left]]--;
            if (freq[s[left]] == 0) freq.erase(s[left]);
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

Use: Variable window with frequency map.
Longest Substring Without Repeating Characters
int lengthOfLongestSubstring(string s) {
    unordered_set<char> seen;
    int maxLen = 0, left = 0;
    for (int right = 0; right < s.length(); right++) {
        while (seen.count(s[right])) {
            seen.erase(s[left]);
            left++;
        }
        seen.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

Use: Sliding window with set for uniqueness.
Count Subarrays with Sum = K
int countSubarrays(vector<int>& arr, int k) {
    unordered_map<int, int> prefixSum;
    prefixSum[0] = 1;
    int sum = 0, count = 0;
    for (int x : arr) {
        sum += x;
        if (prefixSum.count(sum - k)) {
            count += prefixSum[sum - k];
        }
        prefixSum[sum]++;
    }
    return count;
}

Use: Count subarrays with exact sum (prefix sum + hash).

16. PREFIX & SUFFIX
Build Prefix Sum Array
vector<int> buildPrefixSum(vector<int>& arr) {
    vector<int> prefix(arr.size());
    prefix[0] = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    return prefix;
}

Use: Precompute cumulative sums for range queries.
Range Sum Query (Using Prefix)
int rangeSum(vector<int>& prefix, int left, int right) {
    if (left == 0) return prefix[right];
    return prefix[right] - prefix[left - 1];
}

Use: Get sum of elements from index left to right in O(1).
Build Prefix Sum (In-Place)
void buildPrefixSumInPlace(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        arr[i] += arr[i - 1];
    }
}

Use: Convert array to prefix sum in-place.
Build Suffix Sum Array
vector<int> buildSuffixSum(vector<int>& arr) {
    int n = arr.size();
    vector<int> suffix(n);
    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + arr[i];
    }
    return suffix;
}

Use: Cumulative sums from right to left.
Prefix Product Array
vector<long long> buildPrefixProduct(vector<int>& arr) {
    vector<long long> prefix(arr.size());
    prefix[0] = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        prefix[i] = prefix[i - 1] * arr[i];
    }
    return prefix;
}

Use: Precompute cumulative products.
Product of Array Except Self (Without Division)
vector<int> productExceptSelf(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, 1);
    int leftProduct = 1, rightProduct = 1;
    for (int i = 0; i < n; i++) {
        result[i] *= leftProduct;
        leftProduct *= arr[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        result[i] *= rightProduct;
        rightProduct *= arr[i];
    }
    return result;
}

Use: Get product of all except current index.
Running Maximum Array
vector<int> runningMax(vector<int>& arr) {
    vector<int> maxArr(arr.size());
    maxArr[0] = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        maxArr[i] = max(maxArr[i - 1], arr[i]);
    }
    return maxArr;
}

Use: Maximum element seen so far at each position.
Running Minimum Array
vector<int> runningMin(vector<int>& arr) {
    vector<int> minArr(arr.size());
    minArr[0] = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        minArr[i] = min(minArr[i - 1], arr[i]);
    }
    return minArr;
}

Use: Minimum element seen so far at each position.
Difference Array (For Range Updates)
void rangeUpdate(vector<int>& diff, int l, int r, int val) {
    diff[l] += val;
    if (r + 1 < diff.size()) diff[r + 1] -= val;
}

vector<int> getFinalArray(vector<int>& diff) {
    for (int i = 1; i < diff.size(); i++) {
        diff[i] += diff[i - 1];
    }
    return diff;
}

Use: Efficiently apply multiple range updates.
2D Prefix Sum
vector<vector<int>> build2DPrefix(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    vector<vector<int>> prefix(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            prefix[i][j] = matrix[i][j];
            if (i > 0) prefix[i][j] += prefix[i-1][j];
            if (j > 0) prefix[i][j] += prefix[i][j-1];
            if (i > 0 && j > 0) prefix[i][j] -= prefix[i-1][j-1];
        }
    }
    return prefix;
}

Use: 2D range sum queries in O(1).

17. SUBARRAY PATTERNS
Generate All Subarrays
void generateSubarrays(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i; j < arr.size(); j++) {
            // Process subarray from i to j
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

Use: Generate all possible contiguous subarrays.
Kadane's Algorithm (Maximum Subarray Sum)
int maxSubarraySum(vector<int>& arr) {
    int maxSum = arr[0], currSum = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

Use: Find maximum sum of any contiguous subarray.
Kadane's with Start/End Indices
pair<int, pair<int,int>> maxSubarrayWithIndices(vector<int>& arr) {
    int maxSum = arr[0], currSum = arr[0];
    int start = 0, end = 0, tempStart = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > currSum + arr[i]) {
            currSum = arr[i];
            tempStart = i;
        } else {
            currSum = currSum + arr[i];
        }
        if (currSum > maxSum) {
            maxSum = currSum;
            start = tempStart;
            end = i;
        }
    }
    return {maxSum, {start, end}};
}

Use: Get max sum with subarray boundaries.
Minimum Subarray Sum
int minSubarraySum(vector<int>& arr) {
    int minSum = arr[0], currSum = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        currSum = min(arr[i], currSum + arr[i]);
        minSum = min(minSum, currSum);
    }
    return minSum;
}

Use: Find minimum sum subarray (Kadane's variant).
Subarray with Given Sum (Positive Numbers)
pair<int,int> subarraySum(vector<int>& arr, int target) {
    int sum = 0, start = 0;
    for (int end = 0; end < arr.size(); end++) {
        sum += arr[end];
        while (sum > target && start <= end) {
            sum -= arr[start];
            start++;
        }
        if (sum == target) return {start, end};
    }
    return {-1, -1};
}

Use: Find subarray with exact sum (sliding window).
Count Subarrays with Sum = K
int countSubarraySum(vector<int>& arr, int k) {
    unordered_map<int, int> prefixSum;
    prefixSum[0] = 1;
    int sum = 0, count = 0;
    for (int x : arr) {
        sum += x;
        count += prefixSum[sum - k];
        prefixSum[sum]++;
    }
    return count;
}

Use: Count subarrays with exact sum (handles negatives).
Longest Subarray with Sum = K
int longestSubarraySum(vector<int>& arr, int k) {
    unordered_map<int, int> prefixSum;
    prefixSum[0] = -1;
    int sum = 0, maxLen = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (prefixSum.count(sum - k)) {
            maxLen = max(maxLen, i - prefixSum[sum - k]);
        }
        if (!prefixSum.count(sum)) {
            prefixSum[sum] = i;
        }
    }
    return maxLen;
}

Use: Longest subarray with given sum.
Maximum Product Subarray
int maxProduct(vector<int>& arr) {
    int maxProd = arr[0], minProd = arr[0], result = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < 0) swap(maxProd, minProd);
        maxProd = max(arr[i], maxProd * arr[i]);
        minProd = min(arr[i], minProd * arr[i]);
        result = max(result, maxProd);
    }
    return result;
}

Use: Maximum product of contiguous subarray.

18. ARRAY SORTING & ORDERING
Sort Ascending
sort(arr.begin(), arr.end());

Use: Sort in increasing order (O(n log n)).
Sort Descending
sort(arr.begin(), arr.end(), greater<int>());

Use: Sort in decreasing order.
Sort with Custom Comparator (Lambda)
sort(arr.begin(), arr.end(), [](int a, int b) {
    return abs(a) < abs(b);  // sort by absolute value
});

Use: Custom sorting logic.
Sort Pairs by Second Element
vector<pair<int,int>> pairs;
sort(pairs.begin(), pairs.end(), [](auto &a, auto &b) {
    return a.second < b.second;
});

Use: Sort pairs/tuples by specific element.
Sort Strings by Length
vector<string> strs;
sort(strs.begin(), strs.end(), [](string &a, string &b) {
    return a.length() < b.length();
});

Use: Sort strings by custom criteria.
Stable Sort (Preserve Relative Order)
stable_sort(arr.begin(), arr.end());

Use: Sort while maintaining original order of equal elements.
Partial Sort (Top K Elements)
partial_sort(arr.begin(), arr.begin() + k, arr.end());
// First k elements are sorted, rest are unordered

Use: Get k smallest/largest elements efficiently.
Nth Element (Quick Select)
nth_element(arr.begin(), arr.begin() + k, arr.end());
// arr[k] is in correct position, left smaller, right larger

Use: Find kth smallest in O(n) average.
Sort and Keep Original Indices
vector<pair<int,int>> indexed;
for (int i = 0; i < arr.size(); i++) {
    indexed.push_back({arr[i], i});
}
sort(indexed.begin(), indexed.end());

Use: Track original positions after sorting.
Check if Array Can Be Sorted
vector<int> temp = arr;
sort(temp.begin(), temp.end());
// Compare with original constraints

Use: Validation before sorting operations.

19. ARRAY PARTITIONING
Partition by Condition (Even/Odd)
auto it = partition(arr.begin(), arr.end(), [](int x) {
    return x % 2 == 0;  // evens to left
});

Use: STL partition - evens left, odds right.
Manual Partition (Positive/Negative)
void partitionPosNeg(vector<int>& arr) {
    int j = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

Use: Negatives to left, positives to right.
Segregate 0s and 1s
void segregate01(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        while (left < right && arr[left] == 0) left++;
        while (left < right && arr[right] == 1) right--;
        if (left < right) swap(arr[left], arr[right]);
    }
}

Use: All 0s to left, all 1s to right.
Dutch National Flag (Sort 0s, 1s, 2s)
void sort012(vector<int>& arr) {
    int low = 0, mid = 0, high = arr.size() - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++; mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

Use: 3-way partition in O(n) single pass.
Partition Around Pivot (QuickSort Pattern)
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

Use: QuickSort partition - elements < pivot left, >= pivot right.
Move Zeros to End
void moveZeros(vector<int>& arr) {
    int j = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

Use: Keep non-zeros at start, zeros at end (maintain order).
Separate Even and Odd Indices
void separateEvenOdd(vector<int>& arr) {
    vector<int> temp(arr.size());
    int even = 0, odd = 1;
    for (int x : arr) {
        if (x % 2 == 0) {
            temp[even] = x;
            even += 2;
        } else {
            temp[odd] = x;
            odd += 2;
        }
    }
    arr = temp;
}

Use: Evens at even indices, odds at odd indices.
Partition into K Groups
vector<vector<int>> partitionKGroups(vector<int>& arr, int k) {
    vector<vector<int>> groups(k);
    for (int i = 0; i < arr.size(); i++) {
        groups[i % k].push_back(arr[i]);
    }
    return groups;
}

Use: Distribute elements into k equal groups.

🔖 QUICK REFERENCE
Two Pointer Template
int left = 0, right = arr.size() - 1;
while (left < right) {
    // condition check
    // move pointers based on condition
}

Sliding Window Template
int left = 0, windowState = 0;
for (int right = 0; right < arr.size(); right++) {
    // expand window
    while (/* shrink condition */) {
        // shrink window
        left++;
    }
    // update result
}

Prefix Sum Template
vector<int> prefix(n);
prefix[0] = arr[0];
for (int i = 1; i < n; i++) {
    prefix[i] = prefix[i-1] + arr[i];
}
// Range sum: prefix[r] - prefix[l-1]


💡 Search Tips:
Two pointer: pair sum, palindrome, remove duplicates, partition
Sliding window: max sum k, longest substring, variable window
Prefix: range sum, prefix product, running max
Subarray: kadane, max sum, subarray sum k, max product
Sort: custom comparator, partial sort, nth element, stable sort
Partition: dutch flag, segregate 01, move zeros, partition pivot

🔠 TIER 5: STRING OPERATIONS
20. STRING BASICS
String Input (Single Word)
string s;
cin >> s;  // reads until whitespace
cout << s << endl;

Use: Read single word (stops at space/newline).
String Input (Entire Line with Spaces)
string line;
getline(cin, line);  // reads entire line including spaces

Use: Read full line with spaces.
Handle getline After cin
int n;
cin >> n;
cin.ignore();  // clear newline from buffer
getline(cin, line);

Use: Use getline after cin >> to avoid skipping input.
Character Access by Index
string s = "hello";
char first = s[0];      // 'h'
char last = s[s.length() - 1];  // 'o'

Use: Access individual characters (0-indexed).
Safe Character Access
char ch = s.at(index);  // throws exception if out of bounds

Use: Bounds-checked access.
String Length
int len1 = s.length();
int len2 = s.size();  // same as length()
bool isEmpty = s.empty();

Use: Get string length or check if empty.
String Concatenation
string s1 = "Hello";
string s2 = "World";
string s3 = s1 + " " + s2;  // "Hello World"
s1 += " there";  // append to s1

Use: Combine strings.
Append Character
string s = "abc";
s.push_back('d');  // "abcd"
s += 'e';          // "abcde"

Use: Add character to end.
String Comparison
string s1 = "apple", s2 = "banana";
bool equal = (s1 == s2);      // false
bool notEqual = (s1 != s2);   // true
bool less = (s1 < s2);        // true (lexicographic)
int cmp = s1.compare(s2);     // <0 if s1<s2, >0 if s1>s2, 0 if equal

Use: Compare strings lexicographically.
Substring Extraction
string s = "Hello World";
string sub1 = s.substr(0, 5);   // "Hello" (start, length)
string sub2 = s.substr(6);       // "World" (from index to end)

Use: Extract portion of string.
Find Character in String
string s = "hello";
size_t pos = s.find('l');        // 2 (first occurrence)
if (pos != string::npos) {
    cout << "Found at " << pos;
}

Use: Find first occurrence of character.

21. STRING TRAVERSAL & MODIFICATION
Character-by-Character Traversal
string s = "hello";
for (int i = 0; i < s.length(); i++) {
    cout << s[i] << " ";
}

Use: Index-based iteration.
Range-Based Traversal
for (char c : s) {
    cout << c << " ";
}

Use: Iterate through characters (read-only).
Modify Characters (Reference)
for (char &c : s) {
    c = toupper(c);  // modify in-place
}

Use: Modify each character using reference.
Reverse String (STL)
reverse(s.begin(), s.end());

Use: Reverse entire string.
Reverse String (Two Pointer)
int left = 0, right = s.length() - 1;
while (left < right) {
    swap(s[left], s[right]);
    left++;
    right--;
}

Use: Manual reversal using two pointers.
Reverse Words in String
string reverseWords(string s) {
    reverse(s.begin(), s.end());
    int start = 0;
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            reverse(s.begin() + start, s.begin() + i);
            start = i + 1;
        }
    }
    return s;
}

Use: Reverse word order: "hello world" → "world hello".
Remove All Spaces
s.erase(remove(s.begin(), s.end(), ' '), s.end());

Use: Delete all space characters.
Remove Specific Character
s.erase(remove(s.begin(), s.end(), 'a'), s.end());

Use: Remove all occurrences of a character.
Remove Characters (Custom Condition)
s.erase(remove_if(s.begin(), s.end(), [](char c) {
    return !isalpha(c);  // remove non-alphabetic
}), s.end());

Use: Remove characters matching condition.
Replace All Occurrences of Character
replace(s.begin(), s.end(), 'a', 'X');

Use: Replace all 'a' with 'X'.
Replace Substring
size_t pos = s.find("old");
if (pos != string::npos) {
    s.replace(pos, 3, "new");  // replace "old" with "new"
}

Use: Replace first occurrence of substring.
Replace All Substrings
void replaceAll(string &s, const string &from, const string &to) {
    size_t pos = 0;
    while ((pos = s.find(from, pos)) != string::npos) {
        s.replace(pos, from.length(), to);
        pos += to.length();
    }
}

Use: Replace all occurrences of substring.
Convert to Uppercase
for (char &c : s) {
    c = toupper(c);
}
// or: transform(s.begin(), s.end(), s.begin(), ::toupper);

Use: Convert all characters to uppercase.
Convert to Lowercase
for (char &c : s) {
    c = tolower(c);
}
// or: transform(s.begin(), s.end(), s.begin(), ::tolower);

Use: Convert all characters to lowercase.

22. STRING PATTERN MATCHING
Find Substring (First Occurrence)
string s = "hello world";
size_t pos = s.find("world");
if (pos != string::npos) {
    cout << "Found at " << pos;  // 6
}

Use: Find position of first substring occurrence.
Find Last Occurrence
size_t pos = s.rfind("l");  // reverse find

Use: Find last occurrence of substring/character.
Find All Occurrences
vector<int> findAll(string &s, string &pattern) {
    vector<int> positions;
    size_t pos = 0;
    while ((pos = s.find(pattern, pos)) != string::npos) {
        positions.push_back(pos);
        pos++;
    }
    return positions;
}

Use: Get all positions where pattern appears.
Count Pattern Occurrences
int countOccurrences(string &s, string &pattern) {
    int count = 0;
    size_t pos = 0;
    while ((pos = s.find(pattern, pos)) != string::npos) {
        count++;
        pos++;
    }
    return count;
}

Use: Count how many times pattern appears.
Check if String Starts With Prefix
bool startsWith(string &s, string &prefix) {
    return s.substr(0, prefix.length()) == prefix;
}
// C++20: s.starts_with(prefix)

Use: Check if string begins with given prefix.
Check if String Ends With Suffix
bool endsWith(string &s, string &suffix) {
    if (s.length() < suffix.length()) return false;
    return s.substr(s.length() - suffix.length()) == suffix;
}
// C++20: s.ends_with(suffix)

Use: Check if string ends with given suffix.
Find First of Any Characters
size_t pos = s.find_first_of("aeiou");  // first vowel position

Use: Find first occurrence of any character from set.
Find First Not of Characters
size_t pos = s.find_first_not_of("aeiou");  // first non-vowel

Use: Find first character NOT in given set.
Pattern Matching with Two Pointers
bool isSubsequence(string &s, string &t) {
    int i = 0, j = 0;
    while (i < s.length() && j < t.length()) {
        if (s[i] == t[j]) i++;
        j++;
    }
    return i == s.length();
}

Use: Check if s is subsequence of t (not necessarily contiguous).

23. STRING ANALYSIS
Check Palindrome (Two Pointer)
bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

Use: Check if string reads same forwards and backwards.
Check Palindrome (Ignore Case & Non-Alphanumeric)
bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;
        if (tolower(s[left]) != tolower(s[right])) return false;
        left++;
        right--;
    }
    return true;
}

Use: "A man, a plan, a canal: Panama" → true.
Check Anagram (Sorting)
bool isAnagram(string s1, string s2) {
    if (s1.length() != s2.length()) return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

Use: Check if two strings are anagrams.
Check Anagram (Frequency Count)
bool isAnagram(string s1, string s2) {
    if (s1.length() != s2.length()) return false;
    unordered_map<char, int> freq;
    for (char c : s1) freq[c]++;
    for (char c : s2) {
        freq[c]--;
        if (freq[c] < 0) return false;
    }
    return true;
}

Use: Frequency-based anagram check (faster).
Character Frequency Map
unordered_map<char, int> charFrequency(string s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    return freq;
}

Use: Count frequency of each character.
Character Frequency Array (Lowercase Only)
vector<int> freq(26, 0);
for (char c : s) {
    freq[c - 'a']++;
}

Use: Fast frequency count for lowercase letters.
Count Vowels
int countVowels(string s) {
    int count = 0;
    for (char c : s) {
        char ch = tolower(c);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

Use: Count vowel characters.
Count Consonants
int countConsonants(string s) {
    int count = 0;
    for (char c : s) {
        if (isalpha(c)) {
            char ch = tolower(c);
            if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
                count++;
            }
        }
    }
    return count;
}

Use: Count consonant characters.
Count Alphabets, Digits, Special Characters
void countTypes(string s, int &alpha, int &digit, int &special) {
    alpha = digit = special = 0;
    for (char c : s) {
        if (isalpha(c)) alpha++;
        else if (isdigit(c)) digit++;
        else special++;
    }
}

Use: Categorize character types.
Count Unique Characters
int countUnique(string s) {
    unordered_set<char> unique(s.begin(), s.end());
    return unique.size();
}

Use: Count distinct characters.
Find First Non-Repeating Character
char firstNonRepeating(string s) {
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;
    for (char c : s) {
        if (freq[c] == 1) return c;
    }
    return '\0';  // none found
}

Use: Find first character that appears only once.
Find Most Frequent Character
char mostFrequent(string s) {
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;
    char maxChar = s[0];
    int maxFreq = 0;
    for (auto &p : freq) {
        if (p.second > maxFreq) {
            maxFreq = p.second;
            maxChar = p.first;
        }
    }
    return maxChar;
}

Use: Find character with highest frequency.

24. STRING PARSING & CONVERSION
String to Integer (stoi)
string s = "12345";
int n = stoi(s);

Use: Convert numeric string to integer.
String to Long/Double
long l = stol("123456789");
double d = stod("3.14159");
long long ll = stoll("9876543210");

Use: Convert to different numeric types.
String to Integer with Error Handling
int stringToInt(string s) {
    try {
        return stoi(s);
    } catch (invalid_argument &e) {
        cout << "Invalid input";
        return 0;
    } catch (out_of_range &e) {
        cout << "Out of range";
        return 0;
    }
}

Use: Safe conversion with exception handling.
Manual String to Integer (atoi Implementation)
int myAtoi(string s) {
    int i = 0, sign = 1, result = 0;
    while (i < s.length() && s[i] == ' ') i++;  // skip whitespace
    if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }
    while (i < s.length() && isdigit(s[i])) {
        if (result > INT_MAX / 10) return (sign == 1) ? INT_MAX : INT_MIN;
        result = result * 10 + (s[i] - '0');
        i++;
    }
    return result * sign;
}

Use: Custom atoi with overflow handling.
Integer to String
int n = 12345;
string s = to_string(n);

Use: Convert number to string.
Integer to String (Manual)
string intToString(int n) {
    if (n == 0) return "0";
    string s = "";
    bool negative = n < 0;
    n = abs(n);
    while (n > 0) {
        s = char('0' + n % 10) + s;
        n /= 10;
    }
    if (negative) s = "-" + s;
    return s;
}

Use: Manual conversion without to_string.
Split String by Delimiter
vector<string> split(string s, char delimiter) {
    vector<string> tokens;
    string token = "";
    for (char c : s) {
        if (c == delimiter) {
            if (!token.empty()) tokens.push_back(token);
            token = "";
        } else {
            token += c;
        }
    }
    if (!token.empty()) tokens.push_back(token);
    return tokens;
}

Use: Split string into parts by delimiter.
Split String (Using stringstream)
vector<string> split(string s) {
    vector<string> tokens;
    stringstream ss(s);
    string token;
    while (ss >> token) {
        tokens.push_back(token);
    }
    return tokens;
}

Use: Split by whitespace using stringstream.
Split by Multiple Delimiters
vector<string> split(string s, string delimiters) {
    vector<string> tokens;
    size_t start = 0, end = 0;
    while ((end = s.find_first_of(delimiters, start)) != string::npos) {
        if (end != start) {
            tokens.push_back(s.substr(start, end - start));
        }
        start = end + 1;
    }
    if (start < s.length()) {
        tokens.push_back(s.substr(start));
    }
    return tokens;
}

Use: Split by any character in delimiter set.
Parse CSV Line
vector<string> parseCSV(string line) {
    vector<string> fields;
    string field = "";
    bool inQuotes = false;
    for (char c : line) {
        if (c == '"') inQuotes = !inQuotes;
        else if (c == ',' && !inQuotes) {
            fields.push_back(field);
            field = "";
        } else {
            field += c;
        }
    }
    fields.push_back(field);
    return fields;
}

Use: Handle CSV with quoted fields.
Trim Whitespace (Left)
string ltrim(string s) {
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](char c) {
        return !isspace(c);
    }));
    return s;
}

Use: Remove leading whitespace.
Trim Whitespace (Right)
string rtrim(string s) {
    s.erase(find_if(s.rbegin(), s.rend(), [](char c) {
        return !isspace(c);
    }).base(), s.end());
    return s;
}

Use: Remove trailing whitespace.
Trim Whitespace (Both Sides)
string trim(string s) {
    return ltrim(rtrim(s));
}

Use: Remove leading and trailing whitespace.
Join Strings with Delimiter
string join(vector<string> &strs, string delimiter) {
    string result = "";
    for (int i = 0; i < strs.size(); i++) {
        result += strs[i];
        if (i < strs.size() - 1) result += delimiter;
    }
    return result;
}

Use: Combine vector of strings with separator.

🔖 QUICK REFERENCE
Common String Headers
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <unordered_map>
#include <unordered_set>
using namespace std;

Useful Character Functions
isalpha(c)   // check if alphabetic
isdigit(c)   // check if digit
isalnum(c)   // check if alphanumeric
isspace(c)   // check if whitespace
islower(c)   // check if lowercase
isupper(c)   // check if uppercase
tolower(c)   // convert to lowercase
toupper(c)   // convert to uppercase

String Comparison Tips
s1 == s2     // equality
s1 < s2      // lexicographic less
s1.compare(s2)  // returns <0, 0, >0

Common String Operations
s.length()           // size
s.empty()            // check empty
s.clear()            // remove all chars
s.push_back(c)       // append char
s.pop_back()         // remove last char
s.substr(pos, len)   // extract substring
s.find(str)          // find substring
s.erase(pos, len)    // remove portion
s.insert(pos, str)   // insert string


💡 Search Tips:
Basics: string input, getline, concatenation, substring
Modify: reverse string, remove spaces, replace, uppercase, lowercase
Search: find substring, count occurrences, starts with, ends with
Analyze: palindrome, anagram, frequency, count vowels, unique chars
Parse: atoi, stoi, split, trim, join, csv parse
Convert: to_string, string to int, manual atoi

🗂️ TIER 6: HASHING & SETS
25. HASH MAP PATTERNS
Frequency Map (Count Occurrences)
unordered_map<int, int> freq;
for (int x : arr) {
    freq[x]++;
}
// Access: freq[key] gives count

Use: Count frequency of each element.
Character Frequency Map
unordered_map<char, int> freq;
for (char c : str) {
    freq[c]++;
}

Use: Count character occurrences in string.
Find Elements with Frequency > K
vector<int> freqGreaterThanK(vector<int>& arr, int k) {
    unordered_map<int, int> freq;
    vector<int> result;
    for (int x : arr) freq[x]++;
    for (auto &p : freq) {
        if (p.second > k) result.push_back(p.first);
    }
    return result;
}

Use: Filter elements by minimum frequency.
Index Mapping (First Occurrence)
unordered_map<int, int> firstIndex;
for (int i = 0; i < arr.size(); i++) {
    if (firstIndex.find(arr[i]) == firstIndex.end()) {
        firstIndex[arr[i]] = i;
    }
}

Use: Store first occurrence index of each element.
Index Mapping (Last Occurrence)
unordered_map<int, int> lastIndex;
for (int i = 0; i < arr.size(); i++) {
    lastIndex[arr[i]] = i;
}

Use: Store last occurrence index (overwrites).
Index Mapping (All Occurrences)
unordered_map<int, vector<int>> allIndices;
for (int i = 0; i < arr.size(); i++) {
    allIndices[arr[i]].push_back(i);
}

Use: Store all positions where each element appears.
Count Distinct Elements
unordered_set<int> unique(arr.begin(), arr.end());
int distinctCount = unique.size();

Use: Count unique elements using set.
Count Distinct (Using Map)
unordered_map<int, int> freq;
for (int x : arr) freq[x]++;
int distinctCount = freq.size();

Use: Count distinct while also getting frequencies.
Two Sum Pattern (Target Sum)
vector<int> twoSum(vector<int>& arr, int target) {
    unordered_map<int, int> seen;
    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (seen.count(complement)) {
            return {seen[complement], i};
        }
        seen[arr[i]] = i;
    }
    return {-1, -1};
}

Use: Find two indices where arr[i] + arr[j] = target.
Two Sum - All Pairs
vector<pair<int,int>> twoSumAll(vector<int>& arr, int target) {
    unordered_map<int, int> seen;
    vector<pair<int,int>> pairs;
    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (seen.count(complement)) {
            pairs.push_back({seen[complement], i});
        }
        seen[arr[i]] = i;
    }
    return pairs;
}

Use: Find all pairs that sum to target.
Two Sum - Check if Exists
bool hasPairSum(vector<int>& arr, int target) {
    unordered_set<int> seen;
    for (int x : arr) {
        if (seen.count(target - x)) return true;
        seen.insert(x);
    }
    return false;
}

Use: Just check if pair exists (boolean).
Group Anagrams
unordered_map<string, vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> groups;
    for (string s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        groups[key].push_back(s);
    }
    return groups;
}

Use: Group strings by sorted form (anagram groups).
Group by Custom Key (Even/Odd)
unordered_map<string, vector<int>> groupByParity;
for (int x : arr) {
    string key = (x % 2 == 0) ? "even" : "odd";
    groupByParity[key].push_back(x);
}

Use: Categorize elements by custom criteria.
Group by First Character
unordered_map<char, vector<string>> groupByFirst;
for (string s : words) {
    if (!s.empty()) {
        groupByFirst[s[0]].push_back(s);
    }
}

Use: Group strings by starting character.
Subarray Sum Equals K (Count)
int subarraySum(vector<int>& arr, int k) {
    unordered_map<int, int> prefixSum;
    prefixSum[0] = 1;
    int sum = 0, count = 0;
    for (int x : arr) {
        sum += x;
        count += prefixSum[sum - k];
        prefixSum[sum]++;
    }
    return count;
}

Use: Count subarrays with sum = k (prefix sum + hash).
Longest Consecutive Sequence
int longestConsecutive(vector<int>& arr) {
    unordered_set<int> nums(arr.begin(), arr.end());
    int maxLen = 0;
    for (int num : nums) {
        if (!nums.count(num - 1)) {  // start of sequence
            int currNum = num, currLen = 1;
            while (nums.count(currNum + 1)) {
                currNum++;
                currLen++;
            }
            maxLen = max(maxLen, currLen);
        }
    }
    return maxLen;
}

Use: Find length of longest consecutive elements sequence.
Check if Array Contains Duplicate
bool containsDuplicate(vector<int>& arr) {
    unordered_set<int> seen;
    for (int x : arr) {
        if (seen.count(x)) return true;
        seen.insert(x);
    }
    return false;
}

Use: Detect duplicate in O(n) time.

26. HASH SET OPERATIONS
Create Set from Array
unordered_set<int> uniqueSet(arr.begin(), arr.end());

Use: Quick conversion to set (removes duplicates).
Check Element Exists in Set
unordered_set<int> s = {1, 2, 3, 4};
bool exists = s.count(5) > 0;  // or s.find(5) != s.end()

Use: O(1) membership check.
Insert into Set
s.insert(10);
// Returns pair<iterator, bool> - second is true if inserted
auto result = s.insert(20);
if (result.second) {
    cout << "Inserted successfully";
}

Use: Add element to set.
Remove from Set
s.erase(10);  // remove element
s.erase(s.begin());  // remove by iterator

Use: Delete element from set.
Remove Duplicates from Array
vector<int> removeDuplicates(vector<int>& arr) {
    unordered_set<int> seen(arr.begin(), arr.end());
    return vector<int>(seen.begin(), seen.end());
}

Use: Get array with unique elements (order not preserved).
Remove Duplicates (Preserve Order)
vector<int> removeDuplicatesOrdered(vector<int>& arr) {
    unordered_set<int> seen;
    vector<int> result;
    for (int x : arr) {
        if (seen.insert(x).second) {
            result.push_back(x);
        }
    }
    return result;
}

Use: Remove duplicates while keeping first occurrence order.
Find All Unique Elements
unordered_set<int> unique;
for (int x : arr) {
    unique.insert(x);
}
// unique now contains all distinct elements

Use: Collect unique elements.
Set Intersection (Common Elements)
vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
    unordered_set<int> set1(arr1.begin(), arr1.end());
    vector<int> result;
    for (int x : arr2) {
        if (set1.count(x)) {
            result.push_back(x);
            set1.erase(x);  // avoid duplicates
        }
    }
    return result;
}

Use: Find common elements between two arrays.
Set Intersection (Using STL)
set<int> s1(arr1.begin(), arr1.end());
set<int> s2(arr2.begin(), arr2.end());
vector<int> result;
set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), 
                 back_inserter(result));

Use: STL intersection (requires sorted sets).
Set Union
vector<int> unionSets(vector<int>& arr1, vector<int>& arr2) {
    unordered_set<int> result(arr1.begin(), arr1.end());
    result.insert(arr2.begin(), arr2.end());
    return vector<int>(result.begin(), result.end());
}

Use: Combine all unique elements from both arrays.
Set Union (Using STL)
set<int> s1(arr1.begin(), arr1.end());
set<int> s2(arr2.begin(), arr2.end());
vector<int> result;
set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), 
          back_inserter(result));

Use: STL union (sorted).
Set Difference (A - B)
vector<int> difference(vector<int>& arr1, vector<int>& arr2) {
    unordered_set<int> set2(arr2.begin(), arr2.end());
    vector<int> result;
    for (int x : arr1) {
        if (!set2.count(x)) {
            result.push_back(x);
        }
    }
    return result;
}

Use: Elements in arr1 but not in arr2.
Set Difference (Using STL)
set<int> s1(arr1.begin(), arr1.end());
set<int> s2(arr2.begin(), arr2.end());
vector<int> result;
set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), 
               back_inserter(result));

Use: STL difference (sorted).
Symmetric Difference (XOR of Sets)
vector<int> symmetricDiff(vector<int>& arr1, vector<int>& arr2) {
    unordered_set<int> s1(arr1.begin(), arr1.end());
    unordered_set<int> s2(arr2.begin(), arr2.end());
    vector<int> result;
    for (int x : s1) {
        if (!s2.count(x)) result.push_back(x);
    }
    for (int x : s2) {
        if (!s1.count(x)) result.push_back(x);
    }
    return result;
}

Use: Elements in either set but not both.
Check if Set is Subset
bool isSubset(vector<int>& arr1, vector<int>& arr2) {
    unordered_set<int> set2(arr2.begin(), arr2.end());
    for (int x : arr1) {
        if (!set2.count(x)) return false;
    }
    return true;
}

Use: Check if all elements of arr1 are in arr2.
Find Missing Number Using Set
int findMissing(vector<int>& arr, int n) {
    unordered_set<int> present(arr.begin(), arr.end());
    for (int i = 0; i <= n; i++) {
        if (!present.count(i)) return i;
    }
    return -1;
}

Use: Find missing number in range [0, n].

27. CUSTOM HASHING
Hash Function for Pairs
struct PairHash {
    size_t operator()(const pair<int, int>& p) const {
        return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
    }
};

unordered_set<pair<int,int>, PairHash> pairSet;
unordered_map<pair<int,int>, int, PairHash> pairMap;

Use: Hash pairs for use in unordered containers.
Hash Function for Vector
struct VectorHash {
    size_t operator()(const vector<int>& v) const {
        size_t hash = 0;
        for (int x : v) {
            hash ^= std::hash<int>()(x) + 0x9e3779b9 + (hash << 6) + (hash >> 2);
        }
        return hash;
    }
};

unordered_set<vector<int>, VectorHash> vecSet;

Use: Hash vectors for grouping/deduplication.
Hash Function for String (Custom)
size_t customStringHash(const string& s) {
    size_t hash = 0;
    for (char c : s) {
        hash = hash * 31 + c;  // polynomial rolling hash
    }
    return hash;
}

Use: Custom hash for strings (rolling hash pattern).
Hash for Tuple (C++11+)
struct TupleHash {
    size_t operator()(const tuple<int,int,int>& t) const {
        auto h1 = hash<int>()(get<0>(t));
        auto h2 = hash<int>()(get<1>(t));
        auto h3 = hash<int>()(get<2>(t));
        return h1 ^ (h2 << 1) ^ (h3 << 2);
    }
};

unordered_set<tuple<int,int,int>, TupleHash> tupleSet;

Use: Hash tuples for complex keys.
Hash Combine (Generic Helper)
template <typename T>
void hashCombine(size_t& seed, const T& val) {
    seed ^= hash<T>()(val) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
}

struct CustomHash {
    size_t operator()(const MyStruct& obj) const {
        size_t seed = 0;
        hashCombine(seed, obj.field1);
        hashCombine(seed, obj.field2);
        return seed;
    }
};

Use: Reusable hash combiner for custom objects.
Ordered Map (When Order Matters)
map<int, int> orderedMap;  // sorted by key
for (auto &p : orderedMap) {
    cout << p.first << " " << p.second;  // in sorted order
}

Use: Use map instead of unordered_map when order needed.
Ordered Set
set<int> orderedSet;  // automatically sorted
orderedSet.insert(5);
orderedSet.insert(1);
// iteration gives: 1, 5 (sorted)

Use: Maintain sorted unique elements.
Multiset (Allow Duplicates)
multiset<int> ms;
ms.insert(5);
ms.insert(5);  // allowed
ms.count(5);   // returns 2

Use: Sorted collection allowing duplicates.
Collision Awareness - Load Factor
unordered_map<int, int> map;
cout << "Load factor: " << map.load_factor() << endl;
cout << "Max load factor: " << map.max_load_factor() << endl;
map.rehash(100);  // reserve buckets

Use: Monitor and optimize hash table performance.
Reserve Space (Avoid Rehashing)
unordered_map<int, int> map;
map.reserve(1000);  // pre-allocate for 1000 elements

Use: Improve performance when size is known.
Custom Equality for Hash Map
struct CustomEqual {
    bool operator()(const MyKey& k1, const MyKey& k2) const {
        return k1.id == k2.id;  // custom equality
    }
};

unordered_map<MyKey, int, CustomHash, CustomEqual> customMap;

Use: Define custom equality along with hash.
Bucket Access (Advanced)
unordered_map<int, int> map;
cout << "Buckets: " << map.bucket_count() << endl;
cout << "Elements in bucket 0: " << map.bucket_size(0) << endl;

Use: Analyze hash distribution and collisions.

🔖 QUICK REFERENCE
Hash Map vs Hash Set
// Map: key-value pairs
unordered_map<int, int> map;
map[key] = value;

// Set: unique elements only
unordered_set<int> set;
set.insert(value);

Common Hash Map Operations
map[key] = value;        // insert/update
map.count(key)           // check existence (0 or 1)
map.find(key)            // returns iterator
map.erase(key)           // remove
map.size()               // number of elements
map.clear()              // remove all

Common Hash Set Operations
set.insert(x)            // add element
set.count(x)             // check existence
set.erase(x)             // remove
set.size()               // number of elements
set.empty()              // check if empty

Iteration Patterns
// Map iteration
for (auto &p : map) {
    cout << p.first << " " << p.second;
}

// Set iteration
for (int x : set) {
    cout << x << " ";
}

Ordered vs Unordered
unordered_map  // O(1) average, no order
map            // O(log n), sorted by key

unordered_set  // O(1) average, no order
set            // O(log n), sorted


💡 COMMON PATTERNS
Pattern 1: Frequency + Condition
unordered_map<int, int> freq;
for (int x : arr) freq[x]++;
for (auto &p : freq) {
    if (p.second >= k) {
        // element appears k or more times
    }
}

Pattern 2: Two Sum Variants
unordered_map<int, int> seen;
for (int i = 0; i < n; i++) {
    if (seen.count(target - arr[i])) {
        // found pair
    }
    seen[arr[i]] = i;
}

Pattern 3: Grouping by Key
unordered_map<KeyType, vector<ValueType>> groups;
for (auto item : items) {
    KeyType key = computeKey(item);
    groups[key].push_back(item);
}

Pattern 4: Set Operations
unordered_set<int> s1(arr1.begin(), arr1.end());
for (int x : arr2) {
    if (s1.count(x)) {
        // common element
    }
}


💡 Search Tips:
Map: frequency, two sum, index mapping, group by, subarray sum
Set: duplicate, unique, intersection, union, difference, subset
Custom: hash pair, hash vector, hash tuple, custom hash
Performance: reserve, load factor, bucket, rehash
Ordered: map, set, multiset for sorted data

📐 TIER 7: MATRIX & 2D ARRAYS
28. MATRIX TRAVERSAL
Row-Wise Traversal
vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[i].size(); j++) {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}

Use: Process matrix row by row (left to right, top to bottom).
Column-Wise Traversal
int rows = matrix.size();
int cols = matrix[0].size();
for (int j = 0; j < cols; j++) {
    for (int i = 0; i < rows; i++) {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}

Use: Process matrix column by column (top to bottom, left to right).
Main Diagonal Traversal (Top-left to Bottom-right)
// For square matrix
for (int i = 0; i < n; i++) {
    cout << matrix[i][i] << " ";
}

Use: Access diagonal elements where row == col.
Anti-Diagonal Traversal (Top-right to Bottom-left)
// For square matrix
for (int i = 0; i < n; i++) {
    cout << matrix[i][n - 1 - i] << " ";
}

Use: Access anti-diagonal where row + col == n-1.
All Diagonals (Top-Left to Bottom-Right)
int rows = matrix.size(), cols = matrix[0].size();
// Upper diagonals (starting from first row)
for (int startCol = 0; startCol < cols; startCol++) {
    int i = 0, j = startCol;
    while (i < rows && j < cols) {
        cout << matrix[i][j] << " ";
        i++; j++;
    }
    cout << endl;
}
// Lower diagonals (starting from first column)
for (int startRow = 1; startRow < rows; startRow++) {
    int i = startRow, j = 0;
    while (i < rows && j < cols) {
        cout << matrix[i][j] << " ";
        i++; j++;
    }
    cout << endl;
}

Use: Print all diagonals parallel to main diagonal.
All Anti-Diagonals
int rows = matrix.size(), cols = matrix[0].size();
// Diagonals starting from first row
for (int startCol = 0; startCol < cols; startCol++) {
    int i = 0, j = startCol;
    while (i < rows && j >= 0) {
        cout << matrix[i][j] << " ";
        i++; j--;
    }
    cout << endl;
}
// Diagonals starting from last column
for (int startRow = 1; startRow < rows; startRow++) {
    int i = startRow, j = cols - 1;
    while (i < rows && j >= 0) {
        cout << matrix[i][j] << " ";
        i++; j--;
    }
    cout << endl;
}

Use: Print all diagonals parallel to anti-diagonal.
Boundary Traversal (Outer Layer)
vector<int> boundaryTraversal(vector<vector<int>>& matrix) {
    vector<int> result;
    int rows = matrix.size(), cols = matrix[0].size();
    
    if (rows == 1) {
        return matrix[0];
    }
    if (cols == 1) {
        for (auto &row : matrix) result.push_back(row[0]);
        return result;
    }
    
    // Top row
    for (int j = 0; j < cols; j++) result.push_back(matrix[0][j]);
    // Right column (excluding corners)
    for (int i = 1; i < rows - 1; i++) result.push_back(matrix[i][cols-1]);
    // Bottom row (if exists)
    if (rows > 1) {
        for (int j = cols - 1; j >= 0; j--) result.push_back(matrix[rows-1][j]);
    }
    // Left column (excluding corners)
    if (cols > 1) {
        for (int i = rows - 2; i > 0; i--) result.push_back(matrix[i][0]);
    }
    return result;
}

Use: Traverse only the outer boundary of matrix.
4-Direction Traversal (Up, Down, Left, Right)
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
for (int dir = 0; dir < 4; dir++) {
    int newX = x + dx[dir];
    int newY = y + dy[dir];
    if (newX >= 0 && newX < rows && newY >= 0 && newY < cols) {
        // Process neighbor matrix[newX][newY]
    }
}

Use: Visit all 4 adjacent cells (for BFS/DFS on grid).
8-Direction Traversal (Including Diagonals)
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
for (int dir = 0; dir < 8; dir++) {
    int newX = x + dx[dir];
    int newY = y + dy[dir];
    if (newX >= 0 && newX < rows && newY >= 0 && newY < cols) {
        // Process neighbor
    }
}

Use: Visit all 8 surrounding cells (chess king moves).
Zigzag Row Traversal
for (int i = 0; i < rows; i++) {
    if (i % 2 == 0) {
        // Left to right
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
    } else {
        // Right to left
        for (int j = cols - 1; j >= 0; j--) {
            cout << matrix[i][j] << " ";
        }
    }
}

Use: Alternate direction for each row (snake pattern).

29. MATRIX PATTERNS
Spiral Print (Clockwise)
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;
    
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;
    
    while (top <= bottom && left <= right) {
        // Right
        for (int j = left; j <= right; j++) {
            result.push_back(matrix[top][j]);
        }
        top++;
        
        // Down
        for (int i = top; i <= bottom; i++) {
            result.push_back(matrix[i][right]);
        }
        right--;
        
        // Left (if row exists)
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                result.push_back(matrix[bottom][j]);
            }
            bottom--;
        }
        
        // Up (if column exists)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return result;
}

Use: Print matrix in spiral order (very common interview question).
Spiral Print (Counter-Clockwise)
vector<int> spiralCounterClockwise(vector<vector<int>>& matrix) {
    vector<int> result;
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;
    
    while (top <= bottom && left <= right) {
        // Down
        for (int i = top; i <= bottom; i++) {
            result.push_back(matrix[i][left]);
        }
        left++;
        
        // Right
        if (left <= right) {
            for (int j = left; j <= right; j++) {
                result.push_back(matrix[bottom][j]);
            }
            bottom--;
        }
        
        // Up
        if (top <= bottom) {
            for (int i = bottom; i >= top; i--) {
                result.push_back(matrix[i][right]);
            }
            right--;
        }
        
        // Left
        if (left <= right) {
            for (int j = right; j >= left; j--) {
                result.push_back(matrix[top][j]);
            }
            top++;
        }
    }
    return result;
}

Use: Spiral traversal in reverse direction.
Wave Print (Column-wise Zigzag)
vector<int> wavePrint(vector<vector<int>>& matrix) {
    vector<int> result;
    int rows = matrix.size(), cols = matrix[0].size();
    
    for (int j = 0; j < cols; j++) {
        if (j % 2 == 0) {
            // Top to bottom
            for (int i = 0; i < rows; i++) {
                result.push_back(matrix[i][j]);
            }
        } else {
            // Bottom to top
            for (int i = rows - 1; i >= 0; i--) {
                result.push_back(matrix[i][j]);
            }
        }
    }
    return result;
}

Use: Print in wave pattern (alternating column direction).
Zigzag Level Order (Diagonal)
vector<int> zigzagDiagonal(vector<vector<int>>& matrix) {
    vector<int> result;
    int rows = matrix.size(), cols = matrix[0].size();
    bool goingUp = true;
    
    for (int sum = 0; sum < rows + cols - 1; sum++) {
        if (goingUp) {
            int i = min(sum, rows - 1);
            int j = sum - i;
            while (i >= 0 && j < cols) {
                result.push_back(matrix[i][j]);
                i--; j++;
            }
        } else {
            int j = min(sum, cols - 1);
            int i = sum - j;
            while (j >= 0 && i < rows) {
                result.push_back(matrix[i][j]);
                i++; j--;
            }
        }
        goingUp = !goingUp;
    }
    return result;
}

Use: Zigzag diagonal traversal (like reading a book).
Layer-by-Layer Processing (Onion Peel)
void processLayers(vector<vector<int>>& matrix) {
    int rows = matrix.size(), cols = matrix[0].size();
    int layers = min(rows, cols) / 2;
    
    for (int layer = 0; layer < layers; layer++) {
        int top = layer, bottom = rows - 1 - layer;
        int left = layer, right = cols - 1 - layer;
        
        // Process this layer
        // Top row
        for (int j = left; j <= right; j++) {
            cout << matrix[top][j] << " ";
        }
        // Right column
        for (int i = top + 1; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        // Bottom row
        if (bottom > top) {
            for (int j = right - 1; j >= left; j--) {
                cout << matrix[bottom][j] << " ";
            }
        }
        // Left column
        if (right > left) {
            for (int i = bottom - 1; i > top; i--) {
                cout << matrix[i][left] << " ";
            }
        }
        cout << endl;
    }
}

Use: Process matrix layer by layer from outside to inside.
Rotate Layer Clockwise
void rotateLayer(vector<vector<int>>& matrix, int layer) {
    int n = matrix.size();
    int first = layer, last = n - 1 - layer;
    
    for (int i = first; i < last; i++) {
        int offset = i - first;
        int top = matrix[first][i];
        
        // Left -> Top
        matrix[first][i] = matrix[last - offset][first];
        // Bottom -> Left
        matrix[last - offset][first] = matrix[last][last - offset];
        // Right -> Bottom
        matrix[last][last - offset] = matrix[i][last];
        // Top -> Right
        matrix[i][last] = top;
    }
}

Use: Rotate a single layer 90° clockwise.

30. MATRIX OPERATIONS
Transpose Matrix (In-Place for Square)
void transpose(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

Use: Convert rows to columns for square matrix.
Transpose Matrix (For Non-Square)
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int rows = matrix.size(), cols = matrix[0].size();
    vector<vector<int>> result(cols, vector<int>(rows));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
    return result;
}

Use: Transpose rectangular matrix (creates new matrix).
Rotate Matrix 90° Clockwise
void rotate90Clockwise(vector<vector<int>>& matrix) {
    int n = matrix.size();
    // Transpose
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

Use: Rotate square matrix 90° clockwise in-place.
Rotate Matrix 90° Counter-Clockwise
void rotate90CounterClockwise(vector<vector<int>>& matrix) {
    int n = matrix.size();
    // Transpose
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // Reverse each column (reverse rows order)
    reverse(matrix.begin(), matrix.end());
}

Use: Rotate 90° counter-clockwise in-place.
Rotate Matrix 180°
void rotate180(vector<vector<int>>& matrix) {
    int rows = matrix.size(), cols = matrix[0].size();
    for (int i = 0; i < rows / 2; i++) {
        swap(matrix[i], matrix[rows - 1 - i]);
    }
    for (int i = 0; i < rows; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

Use: Flip matrix upside-down and mirror horizontally.
Flip Horizontally (Mirror Left-Right)
void flipHorizontal(vector<vector<int>>& matrix) {
    for (auto &row : matrix) {
        reverse(row.begin(), row.end());
    }
}

Use: Mirror matrix across vertical axis.
Flip Vertically (Mirror Top-Bottom)
void flipVertical(vector<vector<int>>& matrix) {
    reverse(matrix.begin(), matrix.end());
}

Use: Mirror matrix across horizontal axis.
Matrix Multiplication
vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B) {
    int rowsA = A.size(), colsA = A[0].size();
    int rowsB = B.size(), colsB = B[0].size();
    
    if (colsA != rowsB) return {};  // incompatible
    
    vector<vector<int>> result(rowsA, vector<int>(colsB, 0));
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return result;
}

Use: Multiply two matrices (O(n³) complexity).
Row Sum
vector<int> rowSum(vector<vector<int>>& matrix) {
    vector<int> sums;
    for (auto &row : matrix) {
        int sum = 0;
        for (int val : row) sum += val;
        sums.push_back(sum);
    }
    return sums;
}

Use: Calculate sum of each row.
Column Sum
vector<int> colSum(vector<vector<int>>& matrix) {
    int rows = matrix.size(), cols = matrix[0].size();
    vector<int> sums(cols, 0);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sums[j] += matrix[i][j];
        }
    }
    return sums;
}

Use: Calculate sum of each column.
Diagonal Sum
int diagonalSum(vector<vector<int>>& matrix) {
    int n = matrix.size(), sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];  // main diagonal
        if (i != n - 1 - i) {  // avoid double counting middle
            sum += matrix[i][n - 1 - i];  // anti-diagonal
        }
    }
    return sum;
}

Use: Sum of both diagonals (avoid counting center twice).
Search in Row-Sorted Matrix
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    for (auto &row : matrix) {
        if (binary_search(row.begin(), row.end(), target)) {
            return true;
        }
    }
    return false;
}

Use: Search in matrix where each row is sorted.
Search in Fully Sorted Matrix
bool searchSortedMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size(), cols = matrix[0].size();
    int low = 0, high = rows * cols - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int midVal = matrix[mid / cols][mid % cols];
        
        if (midVal == target) return true;
        else if (midVal < target) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}

Use: Binary search treating matrix as 1D array (sorted left-to-right, top-to-bottom).
Search in Row & Column Sorted Matrix
bool searchRowColSorted(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size(), cols = matrix[0].size();
    int i = 0, j = cols - 1;  // start from top-right
    
    while (i < rows && j >= 0) {
        if (matrix[i][j] == target) return true;
        else if (matrix[i][j] > target) j--;  // move left
        else i++;  // move down
    }
    return false;
}

Use: Search where rows and columns are independently sorted (staircase search).
Find Saddle Point
pair<int,int> findSaddlePoint(vector<vector<int>>& matrix) {
    int rows = matrix.size(), cols = matrix[0].size();
    for (int i = 0; i < rows; i++) {
        int minCol = 0;
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] < matrix[i][minCol]) {
                minCol = j;
            }
        }
        bool isSaddle = true;
        for (int k = 0; k < rows; k++) {
            if (matrix[k][minCol] > matrix[i][minCol]) {
                isSaddle = false;
                break;
            }
        }
        if (isSaddle) return {i, minCol};
    }
    return {-1, -1};
}

Use: Find element that is minimum in row and maximum in column.
Set Matrix Zeros
void setZeroes(vector<vector<int>>& matrix) {
    int rows = matrix.size(), cols = matrix[0].size();
    bool firstRowZero = false, firstColZero = false;
    
    // Check if first row/col need to be zero
    for (int j = 0; j < cols; j++) {
        if (matrix[0][j] == 0) firstRowZero = true;
    }
    for (int i = 0; i < rows; i++) {
        if (matrix[i][0] == 0) firstColZero = true;
    }
    
    // Use first row/col as markers
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }
    
    // Set zeros based on markers
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
    
    // Handle first row/col
    if (firstRowZero) {
        for (int j = 0; j < cols; j++) matrix[0][j] = 0;
    }
    if (firstColZero) {
        for (int i = 0; i < rows; i++) matrix[i][0] = 0;
    }
}

Use: If element is 0, set entire row and column to 0 (O(1) space).

🔖 QUICK REFERENCE
Matrix Initialization
// Fixed size
vector<vector<int>> matrix(rows, vector<int>(cols, 0));

// With values
vector<vector<int>> matrix = {{1,2,3}, {4,5,6}};

// Get dimensions
int rows = matrix.size();
int cols = matrix[0].size();

Common Boundary Checks
bool isValid(int i, int j, int rows, int cols) {
    return i >= 0 && i < rows && j >= 0 && j < cols;
}

Direction Arrays
// 4 directions: up, down, left, right
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

// 8 directions (including diagonals)
int dx[] = {-1,-1,-1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1,-1, 1,-1, 0, 1};

Rotation Patterns
// 90° clockwise: transpose + reverse rows
// 90° counter-clockwise: transpose + reverse columns
// 180°: reverse rows + reverse each row


💡 Search Tips:
Traversal: row wise, column wise, diagonal, boundary, 4 direction, 8 direction
Patterns: spiral, wave, zigzag, layer by layer
Operations: transpose, rotate 90, rotate 180, flip, multiply
Search: binary search matrix, staircase search, row col sorted
Problems: set zeros, saddle point, row sum, column sum

