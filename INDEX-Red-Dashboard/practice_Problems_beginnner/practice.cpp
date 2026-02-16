Practice Problems - Beginn…

194. Namaste Codehelp
Read and Print an Integer
Print Half of an Integer
﻿﻿Sum of Two Integers
﻿﻿Average of Three Integers
﻿﻿Calculate the Area of a.....
﻿﻿Calculate the Percentage
﻿﻿Voting Eligibility Checker
﻿﻿Check Number Sign
﻿﻿Determine Day Type
Determine Month Name
Print Number Multiple Ti…
Print Counting from 1 to N
Print Counting from N to 1
Sum of N Numbers
﻿﻿Print Even Numbers fro...
﻿﻿Print maximum of three ...
﻿﻿Check given triangle is V....
﻿﻿Check a number is prime...
﻿﻿Find simple interest
﻿﻿Find perimeter of a trian...




505. Find perimeter of a triangle
504. Find simple interest
503. Check a number is prime or not
502. Check given triangle is valid or not


501. Print maximum of three numbers
class Solution {
public:
    void printEvenNumbers(int n) {
        // Implement the loop logic to print even numbers from 1 to n
    
    for(int i=2; i<=n; i+=2 ){
         cout<<i;
         if(i != n && i!= n-1 ){
            cout<<" ";
         }
        }
    }
};


209. Print Even Numbers from 1 to N
class Solution {
public:
    int sumNumbers(int n) {
        //do not write cin >> n, as input n is already taken in the driver code
        // Implement the loop logic to sum n numbers
        
        int sum =0 , num;
        for(int i=0 ; i<n ; i++){
            cin>>num;
            sum+=num;
        }
        return sum;
    }
};

208. Sum of N Numbers
class Solution {
public:
    void printCountingReverse(int n) {
        // Implement the loop logic to print numbers from n down to 1
        // m-1 for loop 
        // for(int i=n; i>0; --i){
        //     cout<< i<<" ";
        // }

        // M-2 while loop 
        int i= n;
        while(i>0){
            cout<< i<< " ";
            i--;

        }
        

    }
};
207. Print Counting from N to 1
class Solution {
public:
    void printCounting(int n) {
        // Implement the loop logic to print numbers from 1 to n
    
    for (int i=1; i<=n ; i++){
        cout<<i<<" ";

    }
    
    }
}; 
206. Print Counting from 1 to N
class Solution {
public:
    void printNumberMultipleTimes(int num, int n) {
        // Implement the loop logic to print num, n times
        // for (n>=0){
        //     return num ;
        // }
        // for(int i=0; )

        //  error we find --> 
        //  for (int i=0; i<n; i++){
        //     cout<<num<< " ";  // was printing 5_5_5_ // we dont want last sapace
        //  }



        // m-1 for loop 
        // for (int i=0; i<n; i++){
        //     cout<<num;
        //     if(i !=n-1){
        //         cout<<" ";
        //     }
        // }

        // m-2 while loop---> 
        int i=0;
        while(i<n){
            cout<<num;
            if(i !=n-1){
                cout<<" ";

            }
            i++;
        }


    }
}; 
205. Print Number Multiple Times
class Solution {
public:
    string getMonthName(int month) {
        // Implement the switch-case logic to determine the month name

    switch( month){
        case 1:
          return "January";
        case 2:
          return "February";
        case 3:
          return "March";
        case 4:
          return "April";
        case 5:
          return "May";
        case 6:
          return "June";
        case 7:
          return "July";
        case 8:
          return "August";
        case 9:
          return "September";
        case 10:
          return "October";
        case 11:
          return "November";
        case 12:
          return "December";
    }


    }
};
204. Determine Month Name
class Solution {
public:
    string determineDayType(int day) {
    // Implement the if-else-if ladder logic to determine if it's a weekday or weekend
    // m-1 
    // if(day ==1 || day== 2 || day ==3 || day ==4 || day==5){
    //  return "Weekday";
    // }
    // else
    // return "Weekend";

    // m-2 // by switch 
    // switch (day){
    //     case 1:
    //         return "Weekday";
    //     case 2:
    //         return "Weekday";
    //     case 3:
    //         return "Weekday";
    //     case 4:
    //         return "Weekday";
    //     case 5:
    //         return "Weekday";
    //     case 6:
    //         return "Weekend";
    //     case 7:
    //         return "Weekend";
    // }

    // m-2 optimized switch statement 
    // switch (day){
    //     case 1:
    //     case 2:
    //     case 3:
    //     case 4:
    //     case 5:
    //         return "Weekday";
    //     case 6:
    //     case 7:
    //         return "Weekend";
    // }

    //  more optimized switch 
    // switch (day){

    //     case 6:
    //     case 7:
    //         return "Weekend";
    //     default:
    //     return "Weekday";

    // }

    // ternary operator 
    return (day== 6 || day == 7 )? "Weekend" : "Weekday";










    }

};
203. Determine Day Type
class Solution {
public:
    string checkNumberSign(int num) {
        // Implement the logic to check if the number is positive, negative, or zero
        if(num > 0){
            return "Positive";
        }
        else if( num<0 ){
            return "Negative";
        }else{
            return "Zero";

        }
    }
};
202. Check Number Sign
class Solution {
public:
    string checkVotingEligibility(int age) {
        // Implement the logic to check voting eligibility
    // m-1
    // if(age>=18){
    //     return "Eligible to vote";
    
    // }else{
    //     return "Not eligible to vote";
    // }

    // m-2 
    // if(age>=18){
    //     return "Eligible to vote";
    // }
    // return "Not eligible to vote";

    //m-3

    return age>=18 ? "Eligible to vote" : "Not eligible to vote" ;


    






    }
};
201. Voting Eligibility Checker
class Solution {
public:
    double calculatePercentage(int totalMarks, int obtainedMarks) { // -> m-2 //---> just make both int double

        
        // m-1 below 
        double percentage = (obtainedMarks/(double)totalMarks)*100 ;
        return percentage ;

        // --> m2 // return (obtainedMarks/totalMarks)*100 ;



    }
};
200. Calculate the Percentage
class Solution { 
public:
    long long calculateArea(int length, int breadth) {
        // Implement the logic to calculate area of a rectangle
        
    // long long area = length * breadth ;
    // return area;
         //  above ans is not acceptable due to type conversion 
 
    long long  a = (long long)length;
    long long  b = (long long)breadth;
    long long area = a * b ;
    return area;

    }

};


199. Calculate the Area of a Rectangle
class Solution {
public:
    int averageOfThree(int a, int b, int c) {
        // Implement the logic to calculate the average of a, b, and c 
    int sum = a+b+c;
    int n =3;
    int ans = sum/n;
    return ans;

    }

};
198. Average of Three Integers
class Solution {
public:
    int sumOfTwoIntegers(int a, int b) {
        // Implement the logic to calculate the sum of a and b
    int sum = a +b;
    return sum ;
    
    }
};
197. Sum of Two Integers
class Solution {
public:
    int halfOfInteger(int num) {
        // Write down your code here
        int half = num/2;
        return half ;
        
    }
};
196. Print Half of an Integer
class Solution {
public:
    int readAndPrintInteger(int num) {
        //enter your code here
        // int num ;
        // cin >> num;
        // cout<<num<< endl;
        return num;
    }
};


195. Read and Print an Integer
//Write your code here
#include<iostream>
using namespace std;

int main(){
    cout<<"@@Namaste Codehelp@@"<< endl;
    return 0;

}


194. Namaste Codehelp