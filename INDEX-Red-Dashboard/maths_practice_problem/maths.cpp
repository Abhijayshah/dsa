
// • Maths Practice Problems
Maths Practice Problems
• Sum of Digits
• Smallest Digit
• Check if a Number is Ev....
• Reverse a Number
• Palindrome Number
• Check if a Number is P.....
• Check Prime Number
• Find Factorial of a Num....
• Find 2's Complement of ....
• LCM of Two Numbers
• GCD of Two Numbers


Check if a Number is a ...
Count Divisors of a Num....
KM to Miles
Area Of Circle
Check if a Given Numbe....
Reverse an Integer
Print All Prime Numbers ...
Set the Kth Bit
Convert Temperature Be...
Count Total Set Bits in a...
Create a Number Using ....
Print all Digits of an Inte…



_______________________________________________
511. Print all Digits of an Integer
431. Create a Number Using Given Digits
430. Count Total Set Bits in a Number
429. Convert Temperature Between Celsius and Fahrenheit
428. Set the Kth Bit
427. Print All Prime Numbers from 1 to N
426. Reverse an Integer
423. Check if a Given Number is Prime
420. Area Of Circle
419. KM to Miles
223. Count Divisors of a Number
222. Check if a Number is a Narcissistic Number
220. GCD of Two Numbers
219. LCM of Two Numbers
218. Find 2’s Complement of a Number
217. Find Factorial of a Number
216. Check Prime Number
215. Check if a Number is Power of 2
214. Palindrome Number
213. Reverse a Number
212. Check if a Number is Even or Odd
211. Smallest Digit
210. Sum of Digits



__________________________________________


210. Sum of Digits
class Solution {
public:
    int sumOfDigits(int num) {
        int sum = 0;     // this will store the final sum  // 12345

        while (num != 0) {
            int digit = num % 10;  // get the last digit  // 1234
            sum = sum + digit;     // add digit to sum. // 0+5= 5  
            num = num / 10;        // remove last digit.  // 12345 -> 1234 --> 123 
        }

        return sum;
    }
};


211. Smallest Digit

#include<limits.h>
class Solution {
public:
    int smallestDigit(int num) {
        // Implement logic to find the smallest digit
        int smallest = INT_MAX;

        while(num!=0 ){
            int digit = num%10;   // last digit ko nikal ke check kakr rha 
            // __________
            // m-1
            // if(digit < smallest ){
            //     smallest = digit;
            // }

            // m-2
            smallest = min(digit,smallest);
            // ________
            num = num/10 ; // remove last digit --> update the number 
        }
        return smallest ;
    }
};


// 212. Check if a Number is Even or Odd

class Solution {
public:
    string checkEvenOdd(int num) {
        
         // // Method-3: 
        // if( (num & 1)){
        //     return "Odd"; 
        // }
        // else{
        //     return "Even" ;
        // }
        
        // Method-4: 
        if( (num & 1) == 0){
            return "Even"; 
        }
        else{
            return "Odd" ;
        }

        // // Method-1: Using modulo operator (simple & standard)
        // if(num % 2 == 0) {
        //     return "Even";
        // }
        // return "Odd";
      }
};


213. Reverse a Number





class Solution {
public:
    int reverseNumber(int num) {
        // Implement logic to reverse the number

        int ans = 0;
        while( num !=0){
            int digit = num % 10 ;
            ans = ans*10 + digit ;
            num = num/10;

        }
        return ans;
        
    }
};
214. Palindrome Number





class Solution {
public:
   int reverseNumber(int num){
    int ans = 0;
    while(num !=0){
        int digit = num % 10;
        ans=ans*10 + digit;
        num = num / 10;
    }
    return ans ;
   }

   string isPalindrome(int num){
    int original = num;
    int rev = reverseNumber(num);
    if(original == rev){
        return "Yes";
    
    }else{
        return "No";
    }


   }




    
}; 


215. Check if a Number is Power of 2





class Solution {
public:
    string isPowerOfTwo(int num) {

        if (num == 0) {                         // 0 is NOT a power of 2
            return "No";
        }

        // Check if num is a power of 2 using bitwise trick
        if ((num & (num - 1)) == 0) {            // True only when there is exactly ONE set bit
            return "Yes";                        // Example: 1, 2, 4, 8, 16, 32...
        } else {
            return "No";                         // More than one set bit → not a power of 2
        }
    }
};

216. Check Prime Number
class Solution {
public:
    string isPrime(int num) {
        // 1 is not a prime number by definition, handle it specifically
        if (num <= 1) {
            return "No";
        }
        if(num==2 || num==3){
            return "Yes"; 
        }

        // We start checking for divisors from 2
        int start = 2;
        // We stop checking at num - 1 (checking the number itself is unnecessary)
        int end = num - 1;

        // Loop from 2 up to num-1 to see if any number divides 'num' perfectly
        for (int i = start; i <= end; i++) {
            
            // Check if 'num' is perfectly divisible by 'i' (remainder is 0)
            if (num % i == 0) {
                // If we found a divisor, it is NOT prime. Return immediately.
                return "No";
            }   
        }

        // If the loop finishes completely and we never returned "No",
        // it means no number divided it perfectly. It IS a prime.
        return "Yes";
    }
};
217. Find Factorial of a Number

class Solution {
public:
    unsigned long long factorial(int num) {

        unsigned long long result = 1;    // Stores factorial result

        for (int i = 1; i <= num; i++) {  // Multiply numbers from 1 to num
            result = result * i;          // result = result × current number
        }

        return result;                    // Return computed factorial
    }
};

218. Find 2’s Complement of a Number





class Solution {
public:
    int twosComplement(int num) {
        return (~num) + 1;
    }
};

219. LCM of Two Numbers





class Solution {
public:
    int findLCM(int a, int b) {
        // Implement logic to find LCM of a and b
        int start = max(a,b);
        while(true){
            if(start%a==0 && start%b==0){
                return start;

            }
            start++;
            
        }
    }
};

220. GCD of Two Numbers
class Solution {
public:
    int findGCD(int a, int b) {
        // Implement logic to find GCD of a and b
        int gcd = 1;
        int limit = min(a,b);
        for(int i =1; i<= limit; i++){
            if(a%i==0&& b%i==0){
                gcd=i;

            }
        }
        return gcd;
    }
};


222. Check if a Number is a Narcissistic Number
class Solution {
public:
    string isNarcissistic(int num) {
        // Implement logic to check if num is Narcissistic
        int original = num ;
        int temp= num ;
        int digits= 0;

        // count the number of digit 
        while(temp>0){
            digits++;
            temp/=10;

        }
        temp = num ;
        int sum =0;
         // calculate the sume of digits 
         while(temp >0){
            int digit= temp%10;
            sum= sum+ pow(digit, digits);
            temp/=10;

         }
         if (sum == original ){
            return "Yes";
            
         }
         else{
            return "No";

         }

    }
};
223. Count Divisors of a Number
class Solution {
public:
    int countDivisors(int num) {

        int count = 0;                      // Stores total number of divisors

        for (int i = 1; i <= num; i++) {    // Check every number from 1 to num
            if (num % i == 0) {             // If i divides num completely
                count++;                   // Increase divisor count
            }
        }

        return count;                       // Return total divisors
    }
};


// class Solution {
// public:
//     int countDivisors(int num) {

//         int count = 0;                          // Stores total number of divisors

//         for (int i = 1; i * i <= num; i++) {    // Loop till sqrt(num)

//             if (num % i == 0) {                 // If i divides num

//                 if (i == num / i) {             // Perfect square case
//                     count += 1;                 // Count only once
//                 } else {
//                     count += 2;                 // Count both i and num/i
//                 }
//             }
//         }

//         return count;                           // Return total divisors
//     }
// };

419. KM to Miles
class Solution {
public:
    double convertKmToMiles(int Km) {
        double miles = 0;
        miles = Km *0.621371;

        return miles;
       
    }
};



// class Solution {
// public:
//     double convertKmToMiles(int Km) {

//         const double CONVERSION_FACTOR = 0.621371; // KM to Miles constant

//         return Km * CONVERSION_FACTOR;              // Convert and return result
//     }
// };


420. Area Of Circle
class Solution {
public:
    int areaOfCircle(int radius) {

        double pi = 3.14;                     // More accurate value of pi
        double area = pi * radius * radius;   // Calculate area using formula

        return (int)(area);              // Round to nearest integer and return
    }
};

423. Check if a Given Number is Prime

    bool isPrime(int n) {

        if (n <= 1) {                      // 0 and 1 are not prime
            return false;
        }

        int count = 0;                     // Count number of divisors

        for (int i = 1; i <= n; i++) {     // Check divisibility from 1 to n
            if (n % i == 0) {              // If i divides n
                count++;                  // Increase divisor count
            }
        }

        if (count == 2) {                 // Prime numbers have exactly 2 divisors
            return true;
        }

        return false;                     // Otherwise, not prime
    }




// class Solution {
// public:
//     bool isPrime(int n) {

//         if (n <= 1) {                       // Numbers <= 1 are not prime
//             return false;
//         }

//         if (n == 2) {                       // 2 is the smallest prime
//             return true;
//         }

//         if (n % 2 == 0) {                   // Even numbers greater than 2 are not prime
//             return false;
//         }

//         for (long long i = 3; i * i <= n; i += 2) { // Check only odd divisors
//             if (n % i == 0) {               // If divisible
//                 return false;               // Not prime
//             }
//         }

//         return true;                        // No divisors found → prime
//     }
// };


426. Reverse an Integer
class Solution {
public:
     long long int reverseNumber(int num ){
        long long int ans = 0;

        while(num!=0){
            int digit = num %10;
            ans=ans*10 +digit ;
            num = num/10 ;

        }
        return ans ;
     }


    int reverse(int num) {
        // Implement your solution here.
        if(num ==0){
            return 0;
        }

        bool flag =0;
        if(num>0){
            flag =1;

        }else{
            flag = 0;
        }
        num = abs(num);
        long long int ans = reverseNumber(num);
        if(flag == 0){
            ans= 0-ans;

        }
        if (ans > INT_MAX ){
            return 0;
        }
        if(ans < INT_MIN ){
            return 0;
        }
        return ans ;
        

    }
};
427. Print All Prime Numbers from 1 to N





class Solution {
public:
    
    // Helper function to check if a number is prime
    bool isPrime(int n) {

        if (n <= 1) return false;           // 0 and 1 are not prime

        for (int i = 2; i < n; i++) {       // Check divisibility from 2 to n-1
            if (n % i == 0) {               // If divisible
                return false;               // Not prime
            }
        }

        return true;                        // Prime number
    }

    vector<int> printPrimes(int N) {

        vector<int> primes;                // Store all prime numbers

        for (int i = 2; i <= N; i++) {      // Check numbers from 2 to N
            if (isPrime(i)) {               // If number is prime
                primes.push_back(i);        // Add to result
            }
        }

        return primes;                      // Return list of primes
    }
};

428. Set the Kth Bit

int setKthBit(int n, int k) {

    int mask = 1 << k;        // Create a mask with only the k-th bit set to 1

    n = n | mask;             // Use OR to set the k-th bit of n

    return n;                 // Return the updated number
}

429. Convert Temperature Between Celsius and Fahrenheit


class TemperatureConverter {
public:
    double convertTemperature(double temp, string conversionType) {

        double result = 0.0;                     // Variable to store converted temperature

        if (conversionType == "CtoF") {          // If converting Celsius to Fahrenheit
            result = temp * 9 / 5 + 32;           // Apply C → F formula
        }
        else if (conversionType == "FtoC") {     // If converting Fahrenheit to Celsius
            result = (temp - 32) * 5 / 9;         // Apply F → C formula
        }

        return result;                            // Return converted value
    }
};

430. Count Total Set Bits in a Number





class Solution {
public:
    int countTotalSetBits(int n) {

        int total = 0;                          // Stores total set bits

        for (int i = 1; i <= n; i++) {          // Loop from 1 to n
            int x = i;                          // Copy current number

            while (x > 0) {                     // Count set bits of x
                if (x & 1) {                    // Check last bit
                    total++;                   // Increase count if bit is 1
                }
                x >>= 1;                        // Right shift to check next bit
            }
        }

        return total;                           // Return total set bits
    }
};

431. Create a Number Using Given Digits

class Solution {
public:
    int createLargestNumber(vector<int>& digits) {

        sort(digits.begin(), digits.end(), greater<int>()); // Sort digits in descending order

        long long number = 0;                                // Store the final number

        for (int d : digits) {                               // Traverse sorted digits
            number = number * 10 + d;                        // Append digit to number
        }

        return number;                                       // Return the largest number
    }
};



511. Print all Digits of an Integer

class Solution {
public:
    void printDigits(long long N) {
        
        // Convert the number N into a string
        // This helps us keep digits in LEFT-to-RIGHT order
        string s = to_string(N);

        // Loop through each character (digit) in the string
        for (int i = 0; i < s.size(); i++) {

            // Print the current digit
            // s[i] is a character like '3', '4', etc.
            cout << s[i];

            // Print a space ONLY if this is NOT the last digit
            // This avoids the extra trailing space error
            if (i < s.size() - 1)
                cout << " ";
        }

        // ❌ No endl or newline here
        // The judge handles line breaks for each test case
    }
};





 
