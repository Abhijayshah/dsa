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
