#include <iostream>
using namespace std;

// ============================================
// CASE 1: Implicit call to base constructor
// ============================================
class Base1 {
public:
    Base1() {
        cout << "Base1 default constructor called" << endl;
    }
};

class Derived1 : public Base1 {
public:
    Derived1() {
        cout << "Derived1 constructor called" << endl;
    }
    // Note: Base1() is called implicitly even though not mentioned
};

// ============================================
// CASE 2: Explicit call to base constructor
// ============================================
class Base2 {
public:
    Base2(int x) {
        cout << "Base2 parameterized constructor called with value: " << x << endl;
    }
};

class Derived2 : public Base2 {
public:
    Derived2(int x) : Base2(x) {  // Explicit call to Base2(int)
        cout << "Derived2 constructor called" << endl;
    }
};

// ============================================
// CASE 3: Multiple base classes
// ============================================
class BaseA {
public:
    BaseA() {
        cout << "BaseA constructor called" << endl;
    }
};

class BaseB {
public:
    BaseB() {
        cout << "BaseB constructor called" << endl;
    }
};

class DerivedMultiple : public BaseA, public BaseB {
public:
    DerivedMultiple() {
        cout << "DerivedMultiple constructor called" << endl;
    }
    // Both BaseA() and BaseB() are called implicitly
};

// ============================================
// CASE 4: What if base has no default constructor?
// ============================================
class Base3 {
public:
    Base3(int x) {  // Only parameterized constructor
        cout << "Base3 parameterized constructor: " << x << endl;
    }
    // No default constructor
};

class Derived3 : public Base3 {
public:
    Derived3() : Base3(100) {  // MUST explicitly call Base3(int)
        cout << "Derived3 constructor called" << endl;
    }
    // If we don't explicitly call Base3(int), compilation error occurs
};

int main() {
    cout << "========================================" << endl;
    cout << "CASE 1: Implicit Base Constructor Call" << endl;
    cout << "========================================" << endl;
    Derived1 obj1;
    cout << endl;
    
    cout << "========================================" << endl;
    cout << "CASE 2: Explicit Base Constructor Call" << endl;
    cout << "========================================" << endl;
    Derived2 obj2(50);
    cout << endl;
    
    cout << "========================================" << endl;
    cout << "CASE 3: Multiple Base Classes" << endl;
    cout << "========================================" << endl;
    DerivedMultiple obj3;
    cout << endl;
    
    cout << "========================================" << endl;
    cout << "CASE 4: Base Without Default Constructor" << endl;
    cout << "========================================" << endl;
    Derived3 obj4;
    cout << endl;
    
    return 0;
}
```

### Output:
```
========================================
CASE 1: Implicit Base Constructor Call
========================================
Base1 default constructor called
Derived1 constructor called

========================================
CASE 2: Explicit Base Constructor Call
========================================
Base2 parameterized constructor called with value: 50
Derived2 constructor called

========================================
CASE 3: Multiple Base Classes
========================================
BaseA constructor called
BaseB constructor called
DerivedMultiple constructor called

========================================
CASE 4: Base Without Default Constructor
========================================
Base3 parameterized constructor: 100
Derived3 constructor called