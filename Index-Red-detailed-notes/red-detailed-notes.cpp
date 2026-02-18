Data Structures & Algorithms [Codehelp RED]
﻿﻿• Namaste Coder !!
﻿﻿U Learn C++
﻿﻿• Programming in C++
﻿﻿• Practice Problems - Beginn...
﻿﻿• Patterns
﻿﻿• Practice Problems - Patter...
Arrays
﻿﻿• Maths Practice Problems
﻿﻿• Practice Problems - Arrays
﻿﻿• C++ STL
﻿﻿• Sorting and Searching
﻿﻿• Practice Problems - SnS
﻿﻿• Strings
﻿﻿• Practice Problems - Strings
﻿﻿• Pointers and Basic Maths
﻿﻿• Practice Problems
﻿﻿• Recursion
﻿﻿• Practice Problems - Recurs...
﻿﻿• BT and DnC
﻿﻿• Practice Problems - BT & D...
﻿﻿• OOPs Concept
﻿﻿• Linked Lists
﻿﻿• Practice Problems - Linked...
﻿﻿• Stacks
﻿﻿• Practice Problems - Stacks
﻿﻿• Queues
﻿﻿• Practice Problems - Queues
﻿﻿• Trees
﻿﻿• Practice Problems - Trees
﻿﻿• BSTs
﻿﻿• Practice Problems - BST
﻿﻿• Heaps
﻿﻿• Practice Problems - Heaps
﻿﻿• Maps n Tries
﻿﻿• Practice Problems - Maps ...
﻿﻿DP L1
﻿﻿• Practice Problems - DP
﻿﻿• Graphs L1
﻿﻿• Graphs L2
﻿﻿• Practice Problems - Graphs
﻿﻿• End: BONUS Module

Data Structures & Algorithms [Codehelp RED]

﻿﻿• Namaste Coder !!
Welcome to Red
What is LIVE Dashboard
What is RED Dashboard
How to access Lectures
How to Join Discord
How to clear Doubts
How to download Cours...
How to Raise Issue/Tick....
Orientation Session - Up...
Orientation Session


﻿﻿Learn C++
﻿﻿Intro to C++
﻿﻿Setting up VS Code for ....
﻿﻿Setting up VS Code for ....
First CPP Program
﻿﻿Variables and Datatypes
﻿﻿User Input in C++
﻿﻿Control Flow
﻿﻿Switch Case in C++
﻿﻿Ternary Operator in C++
﻿﻿For && While Loop
﻿﻿Do-while Loop && Neste…
Operators in C++
Reference: Binary & Dec....
Reference: TypeCasting ....
Functions in C++
Debug Exercise - 1
32-bit Vs 64-bit
All about datatypes
 How Positive & Negative…


﻿﻿• Programming in C++
﻿﻿L1-Basics of Programmi...
﻿﻿L2-Basics of Programmi…
L3-Basics of Programmi..
Doubt Class - Basics of ...
MS-Basics of Programm…
RED Quiz - Programmin…


﻿﻿• Practice Problems - Beginn…
Practice Problems - Beginn…

Namaste Codehelp
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
﻿﻿• Patterns
• Patterns
﻿﻿Debug Exercise-2
L1-Pattern Printing
﻿﻿L2-Pattern Printing
﻿﻿L3-Pattern Printing
DS-Pattern Printing
﻿﻿MS-Pattern Printing



﻿﻿• Practice Problems - Patter...


Solid Square Pattern
Hollow Square Pattern
Solid Rectangle Pattern
Hollow Rectangle Pattern
Right-Angle Triangle Pa...
Inverted Right-Angle Tri...
Hollow Right-Angle Tria...
Solid Pyramid Pattern
Inverted Solid Pyramid...
Hollow Pyramid Pattern
Solid Diamond Pattern
Hollow Diamond Pattern
Butterfly Pattern
Rhombus Pattern
Number Triangle Pattern
﻿﻿Symmetric Number Pyra...
﻿﻿Number Pyramid Pattern
﻿﻿Floyd's Triangle Pattern
Alphabet Triangle Pattern
﻿﻿Inverted Alphabet Trian...
﻿﻿Symmetric Alphabet Pyr...
﻿﻿Reverse Alphabet Right ...
Pascal's Triangle Pattern
﻿﻿Hourglass Shape Pattern
﻿﻿Zig-Zag Pattern
﻿﻿Spiral Matrix Pattern
﻿﻿Fancy Pattern-1
﻿﻿Fancy Pattern-2
﻿﻿Fancy Pattern-3
﻿﻿Numeric Hollow Half Pyr....

 Arrays
Learn Time & Space Co...
L1-Basic Maths Problems
L1-Arraysl
DS-Maths + Array Basics
MS-Maths Basics
L2-Arrays
L3-Arrays
L4-Arrays
Debug Exercise-3
DS-Arrays
MS-Arrays
Red Quiz - Array



﻿﻿• Maths Practice Problems
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


﻿﻿• Practice Problems - Arrays
﻿﻿Practice Problems - Arrays
﻿﻿Find the Average of Arra....
Multiply Each Element o...
﻿﻿Search for an Element in...
﻿﻿Find the Maximum Elem...
﻿﻿Count the Number of Ze....
﻿﻿Reverse a Vector
﻿﻿Shift Array Elements by ...
﻿﻿Rotate an Array

﻿﻿Rotate an Array


class Solution {
public:
   void rotate(vector<int>& nums, int k) {                    // Main function: rotate array right by k steps (IN-PLACE)
      
       int n = nums.size();                                   // Store array length (n=7 for [1,2,3,4,5,6,7])
      
       k = k % n;                                             // Reduce k if larger than array (k=10 becomes k=3 for n=7)
      
       // =====================================================
       // STEP 1: Save last k elements before they get overwritten
       // =====================================================
       vector<int> temp;                                      // Temporary array to hold last k elements
       for (int i = n - k; i <= n - 1; i++) {                 // Loop: i=4,5,6 (positions n-k to n-1)
           int value = nums[i];                               // Get element at position i (5,6,7)
           temp.push_back(value);                             // Store in temp: temp=[5,6,7]
       }
      
       // =====================================================
       // STEP 2: Shift ALL elements right by k positions
       // =====================================================
       for (int i = n - 1; i >= 0; i--) {                     // Backward loop: i=6,5,4,3,2,1,0
           if (i - k >= 0) {                                  // Check if shifting left by k stays in bounds
               nums[i] = nums[i - k];                         // Move element from i-k to position i
               // Ex: nums[6] = nums[3] → position 6 gets value 4
           }
           // If i-k < 0, skip (front positions handled in Step 3)
       }
      
       // =====================================================
       // STEP 3: Place saved elements at beginning
       // =====================================================
       for (int i = 0; i < k; i++) {                          // Loop first k positions: i=0,1,2
           nums[i] = temp[i];                                 // Copy from temp to front
           // nums[0]=temp[0]=5, nums[1]=temp[1]=6, nums[2]=temp[2]=7
       }
   }
};











Print Extreme Elements...

Print Extreme Elements...




class Solution {
public:
    vector<int> printExtremeElementsAlternately(vector<int> &v) {
        vector<int> ans; // Result vector to store elements in alternating order
        sort(v.begin(), v.end()); // Sort array in ascending order: smallest to largest
        
        int l = 0, r = v.size() - 1; // Two pointers: l at start (smallest), r at end (largest)
        bool amIPickingSmallElement = true; // Flag to alternate between picking small (true) and large (false)
        
        while (l <= r) { // Continue until all elements are processed
            if (amIPickingSmallElement) { // If picking from left (small element)
                ans.push_back(v[l++]); // Add smallest unprocessed element, move left pointer right
                amIPickingSmallElement = false; // Toggle flag to pick large element next
            } else { // If picking from right (large element)
                ans.push_back(v[r--]); // Add largest unprocessed element, move right pointer left
                amIPickingSmallElement = true; // Toggle flag to pick small element next
            }
        }
        
        return ans; // Return result with pattern: smallest, largest, 2nd smallest, 2nd largest, ...
    }
};




























437. Find the Unique Element in an Array
﻿﻿Sort an Array of Os and 1s





// #include<algorithm>
// // class Solution {
// // public:
// //     vector<int> sortArray(vector<int>& nums) {
// //         vector<int> arr = nums;  // make copy
// //         sort(arr.begin(),arr.end());  // sort usinhg  STL
// //         return arr; 

// //     }
// // };



// class Solution {
// public:
//     vector<int> sortArray(vector<int>& nums) {
//         vector<int> arr = nums;                    // Create copy of input array (don't modify original)
//         int n = arr.size();                        // Get length of array for loop control
      
//         int totalZero = 0;                         // Counter for number of 0s
//         int totalOnes = 1;                         // ❌ BUG: Should be 0, currently starts at 1
      
//         for(int i = 0; i < n; i++) {               // Loop through each element
//             if(nums[i] == 0) {                     // If current element is 0
//                 totalZero++;                       // Increment zero counter
//             }
//             if(nums[i] == 1) {                     // If current element is 1 
//                 totalOnes++;                       // Increment ones counter (but unused!)
//             }
//         }
      
//         fill(arr.begin(), arr.begin() + totalZero, 0);  // Fill first 'totalZero' positions with 0s
//         fill(arr.begin() + totalZero, arr.end(), 1);    // Fill remaining positions with 1s
      
//         return arr;                                // Return sorted copy
//     }
// };












Return Sum of Positive…





class Solution {
public:
    pair<int, int> sumPositiveNegative(const vector<int>& arr) {
        int positiveSum = 0; // Variable to store sum of all positive numbers
        int negativeSum = 0; // Variable to store sum of all negative numbers
        
        for (int i = 0; i < arr.size(); i++) { // Traverse through each element in the array
            if (arr[i] > 0) { // Check if current element is positive
                positiveSum += arr[i]; // Add positive number to positiveSum
            } else if (arr[i] < 0) { // Check if current element is negative
                negativeSum += arr[i]; // Add negative number to negativeSum
            }
            // Note: Zero (0) is neither positive nor negative, so it's not added to either sum
        }
        
        return make_pair(positiveSum, negativeSum); // Return pair with (positive sum, negative sum)
    }
};


// // Using Range-Based For Loop

// class Solution {
// public:
//     pair<int, int> sumPositiveNegative(const vector<int>& arr) {
//         int positiveSum = 0; // Variable to store sum of all positive numbers
//         int negativeSum = 0; // Variable to store sum of all negative numbers
        
//         for (int num : arr) { // Range-based loop: iterate through each element
//             if (num > 0) positiveSum += num; // Add to positiveSum if num is positive
//             else if (num < 0) negativeSum += num; // Add to negativeSum if num is negative
//         }
        
//         return {positiveSum, negativeSum}; // Return pair using brace initialization
//     }
// };



// // using ternary opeartion 

// class Solution {
// public:
//     pair<int, int> sumPositiveNegative(const vector<int>& arr) {
//         int positiveSum = 0, negativeSum = 0; // Initialize both sums to 0
        
//         for (int num : arr) { // Iterate through each element in array
//             (num > 0) ? positiveSum += num : (num < 0) ? negativeSum += num : 0; // Ternary: add to respective sum based on sign
//         }
        
//         return {positiveSum, negativeSum}; // Return result as pair
//     }
// };










﻿﻿Find First Unsorted Ele....
﻿﻿Find the Mode of the Ar.....
﻿﻿Identify Elements with H....
﻿﻿Find the kth Most Frequ...
﻿﻿Three Sum
﻿﻿Two Sum

﻿﻿Two Sum


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();                           // Get array length

        for (int i = 0; i < n; i++) {                  // Outer loop: first number
            for (int j = i + 1; j < n; j++) {          // Inner loop: second number (after i)
                int first = nums[i];                   // First number
                int second = nums[j];                  // Second number
                int sum = first + second;              // Calculate sum
                
                if (sum == target) {                   // If sum equals target
                    return {i, j};                     // Return indices immediately
                }
            }
        }
        return {};                                     // No solution found
    }
};











Three Sum


class Solution {
public:
   vector<vector<int>> threeSum(vector<int>& nums) {
       int n = nums.size();
       vector<vector<int>> ans;           // Result: list of triplets that sum to 0
      
       // Sort array first (enables duplicate skipping + two-pointer optimization)
       sort(nums.begin(), nums.end());

       for (int i = 0; i < n - 2; i++) {  // Fix: i < n-2 (need room for j,k)
           // Skip duplicate i values
           if (i > 0 && nums[i] == nums[i - 1]) {
               continue;                      // Skip duplicate first elements
           }
          
           for (int j = i + 1; j < n - 1; j++) {  // Fix: j < n-1
               // Skip duplicate j values
               if (j > i + 1 && nums[j] == nums[j - 1]) {  // Fix: nums[j]
                   continue;
               }
              
               for (int k = j + 1; k < n; k++) {  // Fix: loop bounds
                   // Skip duplicate k values 
                   if (k > j + 1 && nums[k] == nums[k - 1]) {  // Fix: nums[k-1]
                       continue;
                   }

                   int first = nums[i];
                   int second = nums[j];
                   int third = nums[k];
                   int sum = first + second + third;

                   if (sum == 0) {
                       // Found valid triplet
                       vector<int> temp;             // Temporary triplet
                       temp.push_back(first);
                       temp.push_back(second);
                       temp.push_back(third);
                       ans.push_back(temp);          // Add to result
                   }
               }
           }
       }
       return ans;
   }
};











﻿﻿Find Pivot Index
﻿﻿Missing Number
﻿﻿Remove Duplicates Fro...
﻿﻿Maximum Average Suba...
﻿﻿Find Duplicate Number
﻿﻿Missing Elements From...
Find First Repeating Ele...
﻿﻿Common Elements In 3...
﻿﻿Wave Print A Matrix
﻿﻿Spiral Print A Matrix
﻿﻿Factorial Of A Large Nu...
﻿﻿Add Two Numbers Repr...
﻿﻿Print the Sum of Each R...
﻿﻿Print the Sum of Each C...
﻿﻿Transpose of a Matrix
﻿﻿Rotate image
﻿﻿Kth Largest Element in ...
﻿﻿Kth Smallest Element in ....
﻿﻿• C++ STL
﻿﻿Containers
﻿﻿Algorithms
Iterators
﻿﻿Functors
﻿﻿• Sorting and Searching
Bubble Sort
Insertion Sort
Selection Sort
﻿﻿Custom Comparator in S…
﻿﻿L1-Binary Search
L2-Binary Search
L3-Binary Search
DS-Searching & Sorting
[Cancelled] MS-Searchi...
Debug Exercise-4
MS-SnS
MS-SnS-Codes
Red Quiz - Searching & ...


﻿﻿• Practice Problems - SnS
Binary Search Implemen...
Find First and Last Occu...
Find Peak Index in a Mo...
Find Square Root using ...
Search an Element in a ...
Find the Pivot Index of a...
Find Quotient Without U...
Find an Element in a Ne...
Find Single Non-Duplica...
K-diff Pairs in an Array
Find K Closest Elements
Exponential Search
﻿﻿Unbounded Search
Allocate Minimum Pages
Painter's Partition Probl...
Aggressive Cows
EKO - Eko
﻿﻿Roti Prata Problem
Row with Maximum 1's
﻿﻿• Strings
﻿﻿L1-Strings
﻿﻿L2-Strings
L3-Strings
Debug Exercise-5
DS: Strings
﻿﻿MS: Strings
﻿﻿Red Quiz - String
﻿﻿• Practice Problems - Strings
﻿﻿Valid Anagram
﻿﻿Reverse Only Letters
﻿﻿Longest Common Prefix...
﻿﻿Reverse Vowels of a Stri...
﻿﻿Isomorphic String
﻿﻿Reorganize String
﻿﻿Group Anagrams
﻿﻿Longest Palindromic Su....
﻿﻿Find the Index of the Fir...
﻿﻿String to Integer (atoi)
﻿﻿String Compression
﻿﻿Integers to Romans
﻿﻿Number of Laser Beams...
﻿﻿Remove All Adjacent Du…
8 Add Strings
﻿﻿Valid Palindrome
﻿﻿Remove All Occurrences...
﻿﻿Find length of a String
﻿﻿Reverse a Character Arr...
﻿﻿Check if a String is a Pal...
﻿﻿Convert a String to Upp...
﻿﻿Convert a String to Low...
﻿﻿Replace a Character in a...
﻿﻿Decode a Message
Garbage Collection Prob...
Custom Comparator Ba....
 Find and Replace Patter...
Minimum Time Difference
LC 179. Largest Number
LC 6. Zigzag Conversion
Valid Palindrome 2
Repeated DNA Sequenc...
Implement Magic Dictio...
﻿﻿• Pointers and Basic Maths 
Basics Maths for DSA
L1-Pointers
L2-Pointers
• Optimising Sieve & Seg....
Why pointer size 8 bit in ...
Why We Cannot Do arr=...
Wild Pointers
Void Pointers in C++
Dangling Pointers in C++
Debug Exercise-6
9 Red Quiz - Pointers & Ba...
? Red Quiz - Pointers & Ba....


﻿﻿• Practice Problems
Debug Exercise-7
Let's Practice Pointers


﻿﻿• Recursion
Debug Exercise [Recursi...
L1-Recursion
L2-Recursion
• L3-Recursion
DS: Recursion

MS: Recursion #1
Time & Space Complexit...
? Red Quiz - Recursion


﻿﻿• Practice Problems - Recurs…
Last Index of a Characte...

Reverse String Using Re...
﻿﻿Add Strings Using Recur...
﻿﻿Valid Palindrome Using ...
Print All Substrings of a ...
Remove All Occurrences...
Best Time to Buy and Se...
House Robber
Integer to English Words...
Wildcard Matching
Number of Dice Rolls Wi...
• Perfect Squares [Recurs…
Minimum Cost For Ticke....
﻿﻿Compute Fibonacci Nu...
﻿﻿Compute Power of a Nu....
﻿﻿Compute Factorial of a ...
﻿﻿Compute the Sum of an ....

Print All Even Numbers i...
﻿﻿Print All Odd Numbers i...
Find Minimum Element i...
Find Maximum Element i...
﻿﻿Search for an Element in...
﻿﻿Print Digits of a Number ...
Coin Change Il
﻿﻿Generate All Subsequen....
Search in an array
Print an array



﻿﻿• BT and DnC
Extra Class - Recursion ...
L1 - BT and DnC
﻿﻿Quick Sort
﻿﻿L2 - BT and DnC
﻿﻿L3 - BT and DnC
﻿﻿DS: DnC
﻿﻿MS - BT and DnC
﻿﻿Debug Exercise-8
9 Red Quiz - Dnc
MS: DnC

﻿﻿• Practice Problems - BT & D…
Implement Quick Sort Al..
In-place Merge Sort
Counting Inversions
Maximum SubArray
Combination Sum
Combination Sum Il
• Permutations II
Beautiful Arrangement
Distribute Repeating Int...


﻿﻿• OOPs Concept
OOPs is Life
How to Create Objects i...
Encapsulation in C++
Implementing Encapsula...
Inheritance in C++
Implementing Inheritanc...
Polymorphism in C++
Abstraction In C++
Local vs Global Variables
Memory Layout of a Pro....
const keyword / Init List...
Static Keyword in Class
Shallow vs Deep Copy
Can Constructor be ma...
Friend Keyword in C++
Virtual Constructor vs Vi...
Inline Functions in C++
& Debug Exercise-9
9 Red Quiz - Opps


﻿﻿• Linked Lists
﻿﻿L1 - Linked Lists
﻿﻿L2 - Linked Lists
﻿﻿L3 - Linked Lists
﻿﻿L4 - Linked Lists
Debug Exercise-10
﻿﻿DS: LL
﻿﻿MS: LL
Red Quiz - Linked List
﻿﻿• Practice Problems - Linked…
﻿﻿Merge Two Sorted Lists
Sort Linked List
Flatten Linked List
Intersection of Two Link....
Deep Copy of a Linked L...
Print Kth Node from the ...
Delete N Nodes after M...
Rotate List to the Right
﻿﻿Swap Nodes in Linked Li...
Odd-Even Linked List
Nodes Between Critical ...
Merge Nodes in Betwee....
Remove Zero Sum Cons...
﻿﻿Double a Linked List Int...
﻿﻿split linked list in parts
﻿﻿Partition List
 Flattern a multilevel dou...
﻿﻿Add Two Numbers
﻿﻿Sorted linked list of O's,...
﻿﻿reverse linkedlist in grou...
﻿﻿reverse a linkedlist
﻿﻿remove duplicate from s...
﻿﻿linkedlist cycle
﻿﻿linkedlist cycle 2
﻿﻿find the mid node of a li....
checking palindrome in...
add 1 to a linked list nu...


﻿﻿• Stacks
 Debug Exercise-11
 L1- Stacks
﻿﻿L2 - Stacks
﻿﻿L3 - Stacks
DS: Stacks
MS: Stacks
Red Quiz - Stack

﻿﻿• Practice Problems - Stacks

Determine if a String is..
Minimum Add to Make P....
Minimum Bracket Rever...
﻿﻿Remove All Adjacent Du...
﻿﻿Simplify Path
﻿﻿Decode String
﻿﻿Longest Valid Parenthes...
﻿﻿Remove K Digits
﻿﻿Stock Span Problem
﻿﻿Daily Temperatures
﻿﻿Next Greater Node In Li...
Asteroid Collision
﻿﻿The Celebrity Problem
Car Collision Times I
Car Collision Times II
Maximal Rectangle
N Stacks in an Array
Design Browser History
﻿﻿sorted insert
﻿﻿check sorted stack

﻿﻿• Queues

L1 - Queues
L2 - Queues
L3 - Queues
& Debug Exercise-12
DS: Queue
MS: Queue
Red Quiz - Queue

﻿﻿• Practice Problems - Queues
﻿﻿Implement Stack using ...
﻿﻿Implement Queue using ...
﻿﻿k Queues in an Array
﻿﻿Recent Counter
﻿﻿People Aware of a Secret
﻿﻿Sum of Min and Max Ele...
﻿﻿First Non-Repeating Ch…

﻿﻿• Trees
L1 - Binary Trees
﻿﻿L2 - Binary Trees
﻿﻿L3 - Binary Trees
 Debug Exercise-13
 DS: Trees
MS: Trees
L4- Binary trees
Red Quiz - Binary Trees
﻿﻿• Practice Problems - Trees
Maximum Depth of Bina....
Diameter of Binary Tree
Binary Tree Level Order ...
Lowest Common Ancest...
Path Sum
Construct Binary Tree fr...
Boundary Traversal of a ...
• Top View of Binary Tree
Binary Tree Right Side V...
Find Duplicate Subtrees
Burning Tree
Max Sum of Non-Adjace....
Sum of the Longest Blo....
Flatten Binary Tree to Li...
Binary Tree Morris Trave...
Path Sum Ill
Vertical Order Traversal...
Diagonal Traversal in a....
Transform to Sum Tree
﻿﻿Zigzag Level Order Trav...
 Same Tree
 Diameter of a Binary Tree
﻿﻿Height-Balanced Binary ...
Construct Binary Tree fr....
Find the Depth of Tree
In-Order and Post-Order...
N Array Tree (Pre-Order ...
﻿﻿• BSTs
L1 - BST
L2 - BST
L3 - BST
Debug Exercis-14
DS - BST
MS: BST
Red Quiz - Binary Searc...
﻿﻿• Practice Problems - BST
BST Basics
Convert Sorted Array to ...
Convert Sorted List to B...
Construct Binary Search....
Valid BST from Preorder
Lowest Common Ancest...
Inorder Successor of No...
Inorder Predecessor of ...
Kth Smallest Element in ...
Range Sum of BST
Two Sum IV - Input is a....
Find the Median of BST
Check whether the BST....
Merge Two BSTs
Brothers from Different...
Binary Search Tree to Gr...
Replace Every Element ...
Flatten BST to Sorted Li...
Balanced Binary Search ...
Maximum Sum BST in Bi...
Binary Tree to Doubly Li...
Count Complete Binary...
Is Binary Tree Heap?
Left View of a Binary Tr...
Maximum Width of Bina...
Minimum Distance betw...


﻿﻿• Heaps
L1 - Heaps
L2 - Heaps
L3 - Heaps
Debug Exercise-15
DS: Heap
MS: Heap
Red Quiz - Heap


﻿﻿• Practice Problems - Heaps
Check if Binary Tree is ...
Merge Two Binary Max ...
Max Sliding Window
K-Closest Points to Orig...
Get Biggest Three Distin....
Minimum Difference Aft...
Minimum Number of Ref...
Minimum Cost of Ropes
Last Stone Weight


﻿﻿• Maps n Tries
L1 - Maps n Tries
L2 - Maps n Tries
L3 - Maps n Tries
DS: Maps n Tries
Debug Exercise-16
MS: Maps n Tries
Red Quiz - Maps & Tries


﻿﻿• Practice Problems - Maps …
Palindrome Pairs
Camelcase Matching
Top K Frequent Words
Replace Words
Sum equals to Sum
Largest subarray with O...
Array Subset of Another...
Union of two Linked Lists


﻿﻿DP L1
L1 - Dynamic Programmi...


L2 - Dynamic Programm...


L3 - Dynamic Programm...


L4 - Dynamic Programm....


L5 - Dynamic Programm...


L6 - Dynamic Programm....


L7 - Dynamic Programmi...


L8 - Dynamic Programm...


L9 - Dynamic Programm...


Red Quiz - Dp


DS: DP L1


DS: DP L2
MS: DP

﻿﻿• Practice Problems - DP
Perfect Squares
Minimum Cost For Ticke...
Best Time to Buy and Se...
Best Time to Buy and Se...
Best Time to Buy and Se...
Best Time to Buy and Se...
House Robber I!!
Burst Balloons
Predict the Winner
Stone Game
Stone Game I|
Stone Game III
Target Sum
Ones and Zeroes
Reducing Dishes
Distinct Subsequences
Interleaving String
Minimum ASCII Delete S...
Minimum Insertion Step....
Longest Palindromic Su...
Word Break
Word Break II
Unique Binary Search Tr...
Minimum Swaps To Mak....
Make Array Strictly Incr...
Minimum Number of Re...
Russian Doll Envelopes
Best Time to Buy and Se...
Coin Change
Knapsack Problem
Longest Increasing Subs...
Painting the Fence
Decode Ways


﻿﻿• Graphs L1
L1 - Graphs
L2 - Graphs
L3 - Graphs
L4 - Graphs
L5 - Graphs
L6 - Graphs
L7 - Graphs
L8 - Graphs
L9 - Graphs
/ Prim's Algorithm [MST]
| Kruskal's Algorithm [MS...
L10 - Graphs
L-11 Graphs
Red Quiz - Graph
DS: Graphs [Concepts]
DS: Graphs - 2
MS: Graph


﻿﻿• Graphs L2
Debug Exercise-19/20

﻿﻿• Practice Problems - Graphs
Word Ladder I|
Minimum Moves to Reac....
Number of Operations t...
Find the City With the S...
Accounts Merge
Minimum Spanning Tree
Course Schedule
Largest subarray with e...
Number of Islands
Minimum Height Trees
Network Delay Time
Reorder Routes to Make....
Pacific Atlantic Water FL...
Find Eventual Safe Stat...
Keys and Rooms
Rotting Oranges
Jump Game Ill
Find the Town Judge
Is Graph Bipartite?
All Paths From Source ....
Redundant Connection
Critical Connections in a...
Word Ladder
Alien Dictionary
Course Schedule Il
Longest Cycle in a Graph
Minimum Multiplication ...
Number of Provinces
Minimum Number to Re…


﻿﻿• End: BONUS Module
Greedy Algorithm Sessi...
Sliding Window Session
Bit Manipulation Session
The LAST Class

