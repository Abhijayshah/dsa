#include <iostream>
#include <cmath>
using namespace std;

// 1. Multiply 2 numbers after taking input
void multiplyTwoNumbers() {
    double num1, num2;
    cout << "\n=== Multiply Two Numbers ===" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Result: " << num1 * num2 << endl;
}

// 2. Perimeter of triangle
void perimeterOfTriangle() {
    double side1, side2, side3;
    cout << "\n=== Perimeter of Triangle ===" << endl;
    cout << "Enter side 1: ";
    cin >> side1;
    cout << "Enter side 2: ";
    cin >> side2;
    cout << "Enter side 3: ";
    cin >> side3;
    cout << "Perimeter: " << (side1 + side2 + side3) << endl;
}

// 3. Find Simple Interest
void simpleInterest() {
    double principal, rate, time;
    cout << "\n=== Simple Interest ===" << endl;
    cout << "Enter Principal amount: ";
    cin >> principal;
    cout << "Enter Rate of interest: ";
    cin >> rate;
    cout << "Enter Time period (years): ";
    cin >> time;
    double si = (principal * rate * time) / 100;
    cout << "Simple Interest: " << si << endl;
}

// 4. Find Compound Interest
void compoundInterest() {
    double principal, rate, time;
    int n;
    cout << "\n=== Compound Interest ===" << endl;
    cout << "Enter Principal amount: ";
    cin >> principal;
    cout << "Enter Rate of interest: ";
    cin >> rate;
    cout << "Enter Time period (years): ";
    cin >> time;
    cout << "Enter number of times interest compounds per year: ";
    cin >> n;
    double amount = principal * pow((1 + rate / (n * 100)), n * time);
    double ci = amount - principal;
    cout << "Compound Interest: " << ci << endl;
    cout << "Total Amount: " << amount << endl;
}

// 5. Print Counting from N to 1
void countingNto1() {
    int n;
    cout << "\n=== Counting from N to 1 ===" << endl;
    cout << "Enter N: ";
    cin >> n;
    cout << "Counting: ";
    for(int i = n; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
}

// 6. Find Factorial of a Number
void factorial() {
    int n;
    cout << "\n=== Factorial of a Number ===" << endl;
    cout << "Enter a number: ";
    cin >> n;
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial of " << n << " = " << fact << endl;
}

// 7. Check if a number is Prime or not
void checkPrime() {
    int n;
    cout << "\n=== Check Prime Number ===" << endl;
    cout << "Enter a number: ";
    cin >> n;
    
    if(n <= 1) {
        cout << n << " is not a prime number" << endl;
        return;
    }
    
    bool isPrime = true;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }
    
    if(isPrime)
        cout << n << " is a prime number" << endl;
    else
        cout << n << " is not a prime number" << endl;
}

// 8. Check Valid Triangle or not
void checkValidTriangle() {
    double side1, side2, side3;
    cout << "\n=== Check Valid Triangle ===" << endl;
    cout << "Enter side 1: ";
    cin >> side1;
    cout << "Enter side 2: ";
    cin >> side2;
    cout << "Enter side 3: ";
    cin >> side3;
    
    if(side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
        cout << "Valid Triangle" << endl;
    else
        cout << "Not a Valid Triangle" << endl;
}

// 9. Print Max of 2 numbers
void maxOfTwoNumbers() {
    double num1, num2;
    cout << "\n=== Maximum of Two Numbers ===" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    if(num1 > num2)
        cout << "Maximum: " << num1 << endl;
    else if(num2 > num1)
        cout << "Maximum: " << num2 << endl;
    else
        cout << "Both numbers are equal: " << num1 << endl;
}

int main() {
    int choice;
    
    do {
        cout << "\n==============================" << endl;
        cout << "         MAIN MENU" << endl;
        cout << "==============================" << endl;
        cout << "1. Multiply 2 numbers" << endl;
        cout << "2. Perimeter of triangle" << endl;
        cout << "3. Find Simple Interest" << endl;
        cout << "4. Find Compound Interest" << endl;
        cout << "5. Print Counting from N to 1" << endl;
        cout << "6. Find Factorial of a Number" << endl;
        cout << "7. Check if a number is Prime" << endl;
        cout << "8. Check Valid Triangle" << endl;
        cout << "9. Print Max of 2 numbers" << endl;
        cout << "0. Exit" << endl;
        cout << "==============================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1: multiplyTwoNumbers(); break;
            case 2: perimeterOfTriangle(); break;
            case 3: simpleInterest(); break;
            case 4: compoundInterest(); break;
            case 5: countingNto1(); break;
            case 6: factorial(); break;
            case 7: checkPrime(); break;
            case 8: checkValidTriangle(); break;
            case 9: maxOfTwoNumbers(); break;
            case 0: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid choice! Try again." << endl;
        }
        
    } while(choice != 0);
    
    return 0;
}

 

