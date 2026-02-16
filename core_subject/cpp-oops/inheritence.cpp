#include <iostream>
using namespace std;

// ============================================
// CASE 1: PUBLIC member in base class
// ============================================

class Base_Public {
public:
    int public_value = 100;
};

// Case 1a: PUBLIC inheritance with PUBLIC member
class Derived_Public_Public : public Base_Public {
public:
    void display() {
        cout << "Inside Derived_Public_Public: " << public_value << endl;  // ✓ ACCESSIBLE
    }
};

// Case 1b: PROTECTED inheritance with PUBLIC member
class Derived_Protected_Public : protected Base_Public {
public:
    void display() {
        cout << "Inside Derived_Protected_Public: " << public_value << endl;  // ✓ ACCESSIBLE
    }
};

// Case 1c: PRIVATE inheritance with PUBLIC member
class Derived_Private_Public : private Base_Public {
public:
    void display() {
        cout << "Inside Derived_Private_Public: " << public_value << endl;  // ✓ ACCESSIBLE
    }
};

// ============================================
// CASE 2: PROTECTED member in base class
// ============================================

class Base_Protected {
protected:
    int protected_value = 200;
};

// Case 2a: PUBLIC inheritance with PROTECTED member
class Derived_Public_Protected : public Base_Protected {
public:
    void display() {
        cout << "Inside Derived_Public_Protected: " << protected_value << endl;  // ✓ ACCESSIBLE
    }
};

// Case 2b: PROTECTED inheritance with PROTECTED member
class Derived_Protected_Protected : protected Base_Protected {
public:
    void display() {
        cout << "Inside Derived_Protected_Protected: " << protected_value << endl;  // ✓ ACCESSIBLE
    }
};

// Case 2c: PRIVATE inheritance with PROTECTED member
class Derived_Private_Protected : private Base_Protected {
public:
    void display() {
        cout << "Inside Derived_Private_Protected: " << protected_value << endl;  // ✓ ACCESSIBLE
    }
};

// ============================================
// CASE 3: PRIVATE member in base class
// ============================================

class Base_Private {
private:
    int private_value = 300;
public:
    int getPrivateValue() { return private_value; }  // Getter to access private member
};

// Case 3a: PUBLIC inheritance with PRIVATE member
class Derived_Public_Private : public Base_Private {
public:
    void display() {
        // cout << private_value << endl;  // ✗ NOT ACCESSIBLE (compilation error)
        cout << "Inside Derived_Public_Private (using getter): " << getPrivateValue() << endl;  // ✓ Can use public getter
    }
};

// Case 3b: PROTECTED inheritance with PRIVATE member
class Derived_Protected_Private : protected Base_Private {
public:
    void display() {
        // cout << private_value << endl;  // ✗ NOT ACCESSIBLE
        cout << "Inside Derived_Protected_Private (using getter): " << getPrivateValue() << endl;
    }
};

// Case 3c: PRIVATE inheritance with PRIVATE member
class Derived_Private_Private : private Base_Private {
public:
    void display() {
        // cout << private_value << endl;  // ✗ NOT ACCESSIBLE
        cout << "Inside Derived_Private_Private (using getter): " << getPrivateValue() << endl;
    }
};

// ============================================
// Testing further inheritance
// ============================================

class FurtherDerived_FromPublic : public Derived_Public_Public {
public:
    void display() {
        cout << "FurtherDerived_FromPublic: " << public_value << endl;  // ✓ ACCESSIBLE
    }
};

class FurtherDerived_FromProtected : public Derived_Protected_Public {
public:
    void display() { 
        // cout << public_value << endl;  // ✗ NOT ACCESSIBLE (became protected) 
        cout << "FurtherDerived_FromProtected: Cannot access public_value directly" << endl; 
    }
};

class FurtherDerived_FromPrivate : public Derived_Private_Public {
public:
    void display() {
        // cout << public_value << endl;  // ✗ NOT ACCESSIBLE (became private)
        cout << "FurtherDerived_FromPrivate: Cannot access public_value directly" << endl;
    }
};

// ============================================
// MAIN FUNCTION
// ============================================

int main() {
    cout << "========================================" << endl;
    cout << "CASE 1: PUBLIC member in base class" << endl;
    cout << "========================================\n" << endl;
    
    // Case 1a: PUBLIC inheritance
    cout << "--- Case 1a: PUBLIC inheritance ---" << endl;
    Derived_Public_Public obj1a;
    obj1a.display();  // ✓ Works
    cout << "Direct access from main: " << obj1a.public_value << endl;  // ✓ ACCESSIBLE from outside
    cout << endl;
    
    // Case 1b: PROTECTED inheritance
    cout << "--- Case 1b: PROTECTED inheritance ---" << endl;
    Derived_Protected_Public obj1b;
    obj1b.display();  // ✓ Works
    // cout << obj1b.public_value << endl;  // ✗ NOT ACCESSIBLE from outside (becomes protected)
    cout << "Direct access from main: NOT ACCESSIBLE (becomes protected)" << endl;
    cout << endl;
    
    // Case 1c: PRIVATE inheritance
    cout << "--- Case 1c: PRIVATE inheritance ---" << endl;
    Derived_Private_Public obj1c;
    obj1c.display();  // ✓ Works
    // cout << obj1c.public_value << endl;  // ✗ NOT ACCESSIBLE from outside (becomes private)
    cout << "Direct access from main: NOT ACCESSIBLE (becomes private)" << endl;
    cout << endl;
    
    cout << "========================================" << endl;
    cout << "CASE 2: PROTECTED member in base class" << endl;
    cout << "========================================\n" << endl;
    
    // Case 2a: PUBLIC inheritance
    cout << "--- Case 2a: PUBLIC inheritance ---" << endl;
    Derived_Public_Protected obj2a;
    obj2a.display();  // ✓ Works
    // cout << obj2a.protected_value << endl;  // ✗ NOT ACCESSIBLE from outside (protected)
    cout << "Direct access from main: NOT ACCESSIBLE (remains protected)" << endl;
    cout << endl;
    
    // Case 2b: PROTECTED inheritance
    cout << "--- Case 2b: PROTECTED inheritance ---" << endl;
    Derived_Protected_Protected obj2b;
    obj2b.display();  // ✓ Works
    // cout << obj2b.protected_value << endl;  // ✗ NOT ACCESSIBLE from outside
    cout << "Direct access from main: NOT ACCESSIBLE (remains protected)" << endl;
    cout << endl;
    
    // Case 2c: PRIVATE inheritance
    cout << "--- Case 2c: PRIVATE inheritance ---" << endl;
    Derived_Private_Protected obj2c;
    obj2c.display();  // ✓ Works
    // cout << obj2c.protected_value << endl;  // ✗ NOT ACCESSIBLE from outside
    cout << "Direct access from main: NOT ACCESSIBLE (becomes private)" << endl;
    cout << endl;
    
    cout << "========================================" << endl;
    cout << "CASE 3: PRIVATE member in base class" << endl;
    cout << "========================================\n" << endl;
    
    // Case 3a: PUBLIC inheritance
    cout << "--- Case 3a: PUBLIC inheritance ---" << endl;
    Derived_Public_Private obj3a;
    obj3a.display();  // ✓ Works (using getter)
    cout << "Direct access from main: NOT ACCESSIBLE (private members never inherited)" << endl;
    cout << endl;
    
    // Case 3b: PROTECTED inheritance
    cout << "--- Case 3b: PROTECTED inheritance ---" << endl;
    Derived_Protected_Private obj3b;
    obj3b.display();  // ✓ Works (using getter)
    cout << "Direct access from main: NOT ACCESSIBLE" << endl;
    cout << endl;
    
    // Case 3c: PRIVATE inheritance
    cout << "--- Case 3c: PRIVATE inheritance ---" << endl;
    Derived_Private_Private obj3c;
    obj3c.display();  // ✓ Works (using getter)
    cout << "Direct access from main: NOT ACCESSIBLE" << endl;
    cout << endl;
    
    cout << "========================================" << endl;
    cout << "FURTHER INHERITANCE TEST" << endl;
    cout << "========================================\n" << endl;
    
    cout << "--- From PUBLIC inheritance ---" << endl;
    FurtherDerived_FromPublic obj_further1;
    obj_further1.display();  // ✓ Can access because it remained public
    cout << endl;
    
    cout << "--- From PROTECTED inheritance ---" << endl;
    FurtherDerived_FromProtected obj_further2;
    obj_further2.display();  // ✗ Cannot access (became protected)
    cout << endl;
    
    cout << "--- From PRIVATE inheritance ---" << endl;
    FurtherDerived_FromPrivate obj_further3;
    obj_further3.display();  // ✗ Cannot access (became private)
    cout << endl;
    
    return 0;
}
// ```

// ## Expected Output:
// ```
// ========================================
// CASE 1: PUBLIC member in base class
// ========================================

// --- Case 1a: PUBLIC inheritance ---
// Inside Derived_Public_Public: 100
// Direct access from main: 100

// --- Case 1b: PROTECTED inheritance ---
// Inside Derived_Protected_Public: 100
// Direct access from main: NOT ACCESSIBLE (becomes protected)

// --- Case 1c: PRIVATE inheritance ---
// Inside Derived_Private_Public: 100
// Direct access from main: NOT ACCESSIBLE (becomes private)

// ========================================
// CASE 2: PROTECTED member in base class
// ========================================

// --- Case 2a: PUBLIC inheritance ---
// Inside Derived_Public_Protected: 200
// Direct access from main: NOT ACCESSIBLE (remains protected)

// --- Case 2b: PROTECTED inheritance ---
// Inside Derived_Protected_Protected: 200
// Direct access from main: NOT ACCESSIBLE (remains protected)

// --- Case 2c: PRIVATE inheritance ---
// Inside Derived_Private_Protected: 200
// Direct access from main: NOT ACCESSIBLE (becomes private)

// ========================================
// CASE 3: PRIVATE member in base class
// ========================================

// --- Case 3a: PUBLIC inheritance ---
// Inside Derived_Public_Private (using getter): 300
// Direct access from main: NOT ACCESSIBLE (private members never inherited)

// --- Case 3b: PROTECTED inheritance ---
// Inside Derived_Protected_Private (using getter): 300
// Direct access from main: NOT ACCESSIBLE

// --- Case 3c: PRIVATE inheritance ---
// Inside Derived_Private_Private (using getter): 300
// Direct access from main: NOT ACCESSIBLE

// ========================================
// FURTHER INHERITANCE TEST
// ========================================

// --- From PUBLIC inheritance ---
// FurtherDerived_FromPublic: 100

// --- From PROTECTED inheritance ---
// FurtherDerived_FromProtected: Cannot access public_value directly

// --- From PRIVATE inheritance ---
// FurtherDerived_FromPrivate: Cannot access public_value directly



#include <iostream>
using namespace std;

class student {
public: 
    int marks;
    void setMarks(int m) { marks = m; }
};

class stream {
public:
    int total;
    void setTotal(int t) { total = t; }
};

// Multiple Inheritance: topper inherits from both student and stream
class topper : public student, public stream {
public:
    void display() {
        cout << "Marks: " << marks << endl;
        cout << "Total: " << total << endl;
    }
};

int main() {
    topper t;
    t.setMarks(95);      // From student class
    t.setTotal(100);     // From stream class
    t.display();         // From topper class
    
    return 0;
}
```

### Output:
```
Marks: 95
Total: 100