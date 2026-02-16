Practice Problems - Arrays
_______________________________________________________
﻿﻿Find the Average of Arra....
Multiply Each Element o...
﻿﻿Search for an Element in...
﻿﻿Find the Maximum Elem...
﻿﻿Count the Number of Ze....
﻿﻿Reverse a Vector
﻿﻿Shift Array Elements by ...
﻿﻿Rotate an Array
Print Extreme Elements...
﻿﻿Find the Unique Element...
﻿﻿Sort an Array of Os and 1s
Return Sum of Positive...
﻿﻿Find First Unsorted Ele....
﻿﻿Find the Mode of the Ar.....
﻿﻿Identify Elements with H....
﻿﻿Find the kth Most Frequ...
﻿﻿Three Sum
﻿﻿Two Sum
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
_______________________________________________________
548. Kth Smallest Element in an Array
547. Kth Largest Element in an Array
512. Rotate image
444. Transpose of a Matrix
443. Print the Sum of Each Column in a 2D Array
442. Print the Sum of Each Row in a 2D Array
494. Add Two Numbers Represented By Two Arrays
495. Factorial Of A Large Number
493. Spiral Print A Matrix
492. Wave Print A Matrix
491. Common Elements In 3 Sorted Array
490. Find First Repeating Element
489. Missing Elements From An Array With Duplicates
488. Find Duplicate Number
485. Maximum Average Subarray
484. Remove Duplicates From Sorted Array
483. Missing Number
482. Find Pivot Index
481. Two Sum
438. Three Sum
229. Find the kth Most Frequent Element
231. Identify Elements with Highest and Lowest Frequency Separately
230. Find the Mode of the Array
227. Find First Unsorted Element in Array
225. Return Sum of Positive and Negative Elements in Array Using Pair
439. Sort an Array of 0s and 1s
437. Find the Unique Element in an Array
434. Print Extreme Elements Alternately
440. Rotate an Array
228. Shift Array Elements by One Position
226. Reverse a Vector
436. Count the Number of Zeros and Ones in an Array
435. Find the Maximum Element in an Array
433. Search for an Element in an Array
432. Multiply Each Element of an Array by 10
224. Find the Average of Array Elements

_______________________________________________________




548. Kth Smallest Element in an Array
547. Kth Largest Element in an Array
512. Rotate image
444. Transpose of a Matrix
443. Print the Sum of Each Column in a 2D Array
442. Print the Sum of Each Row in a 2D Array
494. Add Two Numbers Represented By Two Arrays
495. Factorial Of A Large Number
493. Spiral Print A Matrix
492. Wave Print A Matrix
491. Common Elements In 3 Sorted Array
490. Find First Repeating Element
489. Missing Elements From An Array With Duplicates
488. Find Duplicate Number
485. Maximum Average Subarray
484. Remove Duplicates From Sorted Array
483. Missing Number
482. Find Pivot Index
481. Two Sum
438. Three Sum
class Solution {
public:
    int kthMostFrequent(const vector<int>& arr, int k) {
        unordered_map<int, int> freq;

        // Count frequency
        for (int num : arr) {
            freq[num]++;
        }

        // Not enough unique elements
        if (freq.size() < k) {
            return -1;
        }

        // Store (frequency, value)
        vector<pair<int, int>> v;
        for (auto &it : freq) {
            v.push_back({it.second, it.first});
        }

        // Sort: frequency desc, value desc
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            if (a.first != b.first)
                return a.first > b.first;
            return a.second > b.second;
        });

        return v[k - 1].second;
    }
};

229. Find the kth Most Frequent Element
class Solution {
public:
    pair<int, int> highestAndLowestFrequency(const vector<int>& arr) {

        int n= arr.size();
        int maxFreq = 0;
        int minFreq = n;

        int maxEle = arr[0];
        int minEle = arr[0];

        for(int i=0; i<n; i++){

            int count = 0;

            for(int j=0; j<n; j++){
                if(arr[i]== arr[j]){
                    count++;
                }
            }
            // UPDATE HIGHEST FREQUENCY        
            if(count > maxFreq || (count == maxFreq && arr[i]< maxEle)){
                maxFreq = count;
                maxEle = arr[i];
            
            }
            // update lowest frequency 
            if(count < minFreq || ( count == minFreq && arr[i] < minEle )){
                minFreq = count;
                minEle = arr[i];
            }
        }



        return {maxEle,minEle}; 

    }
};
231. Identify Elements with Highest and Lowest Frequency Separately
class Solution {
public:
    int findMode(const vector<int>& arr) {

        int n = arr.size();
        int maxFreq = 0;               // Highest frequency found
        int mode = arr[0];             // Mode value

        for (int i = 0; i < n; i++) {

            int count = 0;             // Frequency of arr[i]

            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }

            // Update mode
            if (count > maxFreq || 
               (count == maxFreq && arr[i] < mode)) {
                maxFreq = count;
                mode = arr[i];
            }
        }

        return mode;
    }
};

230. Find the Mode of the Array
class Solution {
public:
    int findFirstUnsortedIndex(const vector<int>& arr) {

        int n = arr.size();                 // Size of the array

        // Traverse the array
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {      // Violation found
                return i;                   // Return index
            }
        }

        return -1;                          // Array is sorted
    }
};

227. Find First Unsorted Element in Array
// class Solution {
// public:
//     pair<int, int> sumPositiveNegative(const vector<int>& arr) {

//         int positiveSum = 0;            // Stores sum of positive numbers
//         int negativeSum = 0;            // Stores sum of negative numbers

//         // Traverse the array
//         for (int i = 0; i < arr.size(); i++) {

//             if (arr[i] > 0) {
//                 positiveSum += arr[i]; // Add positive number
//             }
//             else if (arr[i] < 0) {
//                 negativeSum += arr[i]; // Add negative number
//             }
//         }

//         return {positiveSum, negativeSum}; // Return pair
//     }
// };


class Solution {
public:
    pair<int, int> sumPositiveNegative(const vector<int>& arr) {

        int posSum = 0;                 // Sum of positive elements
        int negSum = 0;                 // Sum of negative elements

        for (int num : arr) {           // Traverse array
            if (num > 0)
                posSum += num;          // Add positives
            else if (num < 0)
                negSum += num;          // Add negatives
        }

        return make_pair(posSum, negSum); // Return result as pair
    }
};

225. Return Sum of Positive and Negative Elements in Array Using Pair
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int countZero = 0;  // count number of 0s
        int countOne =0;   // count number of 1s
        // count 0s and 1s 
        for (int x : nums ){
            if(x==0) countZero++;
            else countOne++;

        }

        vector<int> result;  // new sorted array 

        // insert all 0s 
        for(int i=0; i<countZero; i++){
            result.push_back(0);

        }

        // insert all 0s 
        for(int i=0; i<countOne; i++){
            result.push_back(1);

        }

        return result;  // return sorted array 

    }
};


// class Solution {
// public:
//     vector<int> sortArray(vector<int>& nums) {

//         int left = 0;                          // Pointer from start
//         int right = nums.size() - 1;           // Pointer from end

//         while (left < right) {

//             if (nums[left] == 0) {
//                 left++;                        // Correct position
//             }
//             else if (nums[right] == 1) {
//                 right--;                       // Correct position
//             }
//             else {
//                 swap(nums[left], nums[right]); // Swap misplaced 0 and 1
//                 left++;
//                 right--;
//             }
//         }

//         return nums;                           // Sorted in-place
//     }
// };

439. Sort an Array of 0s and 1s
// // NOT RECOMMENDED (only for understanding)
// int findUniqueElement(vector<int>& nums) {

//     for (int i = 0; i < nums.size(); i++) {
//         int count = 0;
//         for (int j = 0; j < nums.size(); j++) {
//             if (nums[i] == nums[j]) {
//                 count++;
//             }
//         }
//         if (count == 1) {
//             return nums[i];
//         }
//     }

//     return -1;
// }


class Solution {
public:
    int findUniqueElement(vector<int>& nums) {

        int result = 0;                      // Initialize XOR result

        for (int num : nums) {               // Traverse array
            result = result ^ num;            // XOR current element
        }

        return result;                       // Unique element
    }
};

437. Find the Unique Element in an Array
class Solution { 
public: 
    vector<int> printExtremeElementsAlternately(vector<int>& arr) {

        sort(arr.begin(), arr.end());        // Step 1: Sort the array

        vector<int> result;                  // Store final order
        int i = 0;                            // Pointer to smallest element
        int j = arr.size() - 1;               // Pointer to largest element

        while (i <= j) {                      // Continue until all elements used
            if (i == j) {                     // If only one element left
                result.push_back(arr[i]);
            } else {
                result.push_back(arr[i]);     // Pick smallest
                result.push_back(arr[j]);     // Pick largest
            }
            i++;
            j--;
        }

        return result;                        // Return the result array
    }
};

434. Print Extreme Elements Alternately
class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();          // Size of array
        k = k % n;                    // Reduce unnecessary rotations

        for (int step = 0; step < k; step++) {   // Rotate k times

            int last = nums[n - 1];   // Store last element

            for (int i = n - 1; i > 0; i--) {
                nums[i] = nums[i - 1]; // Shift elements right
            }

            nums[0] = last;           // Place last element at front
        }
    }
};

440. Rotate an Array
class Solution {
public:
    vector<int> shiftRight(const vector<int>& arr) {

        int n = arr.size();

        // If array has only one element, return as it is
        if (n == 1)
            return arr;

        // Create a new array to store the result
        vector<int> result(n);

        // Step 1: Place last element at first position
        result[0] = arr[n - 1];

        // Step 2: Shift remaining elements to the right
        for (int i = 0; i < n - 1; i++) {
            result[i + 1] = arr[i];
        }

        return result;
    }
};

228. Shift Array Elements by One Position
class Solution {
public:
    vector<int> reverseArray(const vector<int>& arr) {
        // Implement logic to reverse the array
        vector<int> reversed;
        int size = arr.size();

        for(int i = size-1; i>=0; i--){
            reversed.push_back(arr[i]);

        }
        return reversed;
    }
};
226. Reverse a Vector
class Solution {
public:
    pair<int, int> countZerosAndOnes(const vector<int>& nums) {

        int totalZeroes = 0;                      // Count how many 0s appear
        int totalOnes = 0;                        // Count how many 1s appear
        int size = nums.size();                   // Store number of elements

        for (int i = 0; i < size; i++) {          // Loop through each element

            if (nums[i] == 0) {                   // If element is 0
                totalZeroes++;                    // Increase zero counter
            }
            else if (nums[i] == 1) {              // If element is 1
                totalOnes++;                      // Increase one counter
            }
            // Other numbers are ignored
        }
        //    M-1 
        return { totalZeroes, totalOnes };


        // Method 2 of returning a pair:
        pair<int, int> ans;                       // Create a pair object
        ans.first = totalZeroes;                  // First value = zero count
        ans.second = totalOnes;                   // Second value = one count

        return ans;                               // Return the pair
    }
};

436. Count the Number of Zeros and Ones in an Array
#include <limits.h>
class Solution {
public:
    int findMaximum(vector<int>& arr) {

        int maxi = INT_MIN;                 // Start with the smallest possible integer
        int size = arr.size();              // Get number of elements

        for (int i = 0; i < size; i++) {    
            maxi = max(maxi, arr[i]);       // Update maxi if arr[i] is larger
        }

        return maxi;                        // maxi now contains the maximum value
    }
};

435. Find the Maximum Element in an Array
int searchElementInArray(vector<int>& nums, int target) {
    // Implement the logic to search for an element in the array
    int size = nums.size();

    for(int i=0 ; i< size ; i++){
        int value = nums[i];
        if(value == target)
        {
            return i;
        }
    }
    return -1; // Placeholder return
}  
433. Search for an Element in an Array
vector<int> multiplyByTen(const vector<int>& arr) {

    vector<int> arrCopy = arr;       // Make a copy because arr is const and we want to modify elements

    int size = arrCopy.size();       // Get the number of elements in the array

    for (int i = 0; i < size; i++) { // Loop through all elements in the vector
        arrCopy[i] = arrCopy[i] * 10; // Multiply each element by 10
    }

    return arrCopy;                  // Return the modified vector
}

432. Multiply Each Element of an Array by 10
class Solution {
public:
    double findAverage(const vector<int>& arr) {

        double ans = 0;                     // Will store the final average value
        double totalSum = 0;                // Used to accumulate the sum of all elements
        int size = arr.size();              // Get total number of elements in the array

        for (int i = 0; i < size; i++) {    // Loop through all array elements
            int value = arr[i];             // Extract current element
            totalSum = totalSum + value;    // Add element to total sum
        }

        ans = totalSum / size;              // Calculate average = total sum / number of elements
        return ans;                         // Return the computed average
    }
};

224. Find the Average of Array Elements


