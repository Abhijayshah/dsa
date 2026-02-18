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
Extract Digits Without Reverse
string s = to_string(n);
vector<int> digits;
for (char c : s) {
    digits.push_back(c - '0');
}

Use: Get digits in correct order using string conversion.
Reverse a Number
int n = 12345, rev = 0;
while (n > 0) {
    rev = rev * 10 + n % 10;
    n /= 10;
}
// rev = 54321

Use: Reverse all digits of a number.
Reverse with Overflow Check
int n = 12345, rev = 0;
while (n > 0) {
    if (rev > INT_MAX / 10) return 0; // overflow
    rev = rev * 10 + n % 10;
    n /= 10;
}

Use: Safe reversal preventing integer overflow.
Sum of Digits
int n = 12345, sum = 0;
while (n > 0) {
    sum += n % 10;
    n /= 10;
}
// sum = 15

Use: Add all digits together.
Product of Digits
int n = 1234, product = 1;
while (n > 0) {
    product *= (n % 10);
    n /= 10;
}
// product = 24

Use: Multiply all digits together.
Check Palindrome Number
int original = n, rev = 0;
while (n > 0) {
    rev = rev * 10 + n % 10;
    n /= 10;
}
bool isPalindrome = (original == rev);

Use: Check if number reads same forwards and backwards.
Count Specific Digit Occurrence
int n = 121212, digit = 1, count = 0;
while (n > 0) {
    if (n % 10 == digit) count++;
    n /= 10;
}
// count = 3

Use: Count how many times a digit appears.
Find Largest Digit
int n = 584921, maxDigit = 0;
while (n > 0) {
    maxDigit = max(maxDigit, n % 10);
    n /= 10;
}
// maxDigit = 9

Use: Find the largest digit in a number.
Find Smallest Digit
int n = 584921, minDigit = 9;
while (n > 0) {
    minDigit = min(minDigit, n % 10);
    n /= 10;
}
// minDigit = 1

Use: Find the smallest digit in a number.
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

6. NUMBER PROPERTIES
Check Even or Odd
bool isEven = (n % 2 == 0);
bool isOdd = (n % 2 != 0);
// or bitwise: bool isEven = (n & 1) == 0;

Use: Determine if number is even or odd.
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
Check Prime (Simple Version)
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

Use: Simple prime check for beginners.
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

