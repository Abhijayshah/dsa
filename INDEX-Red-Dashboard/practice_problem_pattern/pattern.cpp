• Practice Problems - Patter...


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

________________________________________________________

510. Numeric Hollow Half Pyramid
509. Fancy Pattern-3
508. Fancy Pattern-2
507. Fancy Pattern-1
187. Spiral Matrix Pattern

class Solution {
public:
    void printZigZag(int n) {
        // Implement the pattern printing logic here
        int npart1=n;
        int maxspace=2*n-1;

        // part-1
        for(int row=1; row<=npart1; row++){
           // space 
            for(int col=1; col<=row-1; col++){
                cout<<" ";

            }
           // star + Space 
           cout<<"*";
           for(int col=1; col<=maxspace; col++){
            cout<<" ";
           }
           maxspace = maxspace-2 ;
           cout<<"*";

           cout<< endl;

        }

        // part-2
        int npart2= n+1;
        for(int row=1; row<=npart2; row++){
            // space 
            for(int col=1; col<=(npart2-row); col++){
                cout<<" ";
             }
            //star 
            if(row==1){
                cout<<"*";
            }
            else{
                cout<<"*";
                for(int col=1 ; col<=2*row -3; col++){
                    cout<<" ";
                }
               cout<<"*";
           }
           cout<<endl;
        
        }
    }
}; 


 
186. Zig-Zag Pattern
class Solution {
public:
    void printHourglass(int n) {
        // Implement the pattern printing logic here
        // part-1
        for(int row=1; row<=n ;row++){
            // space 
            for(int col=1; col<=row-1 ;col++ ){
                cout<<" ";

            }
            for(int col=1; col<=2*(n-row+1); col++){
                cout<< "*";
            }
            cout<<endl;

        }
        
        // part-2
        for(int row=1; row<=n ;row++){
            // space 
            for(int col=1; col<=n-row ;col++ ){
                cout<<" ";

            }
            // star 
            for(int col=1; col<=2*row; col++){
                cout<< "*";
            }
           
            cout<<endl;
        }
    }
}; 
185. Hourglass Shape Pattern
182. Pascal’s Triangle Pattern
193. Reverse Alphabet Right Triangle Pattern
class Solution {
public:
    void printSymmetricAlphabetPyramid(int n) {

        for (int i = 0; i < n; i++) {                 // Loop for each row

            // Step 1: Print leading spaces
            for (int space = 0; space < n - i - 1; space++) {
                cout << " ";
            }

            // Step 2: Print increasing alphabets (A to ith letter)
            for (int j = 0; j <= i; j++) {
                cout << char('A' + j);
            }

            // Step 3: Print decreasing alphabets (i-1 to A)
            for (int j = i - 1; j >= 0; j--) {
                cout << char('A' + j);
            }

            cout << endl;                             // Move to next line
        }
    }
};

192. Symmetric Alphabet Pyramid Pattern
class Solution {
public:
    void printInvertedAlphabetTriangle(int n) {
        // Implement the pattern printing logic here
        //m-1
        //  for(int row=1; row<=n; row++){
        //     //alpha
        //     char ch='A';
        //     for(int col=1; col<=(n-row+1) ; col++){
        //         cout<< ch;
        //         ch++;

        //     }
        //     for(int col=1; col<=row-1; col++){
        //         cout<<" ";

        //     }
        //     cout<<endl;
        //  }
         




        // // reverse method m-2

        //     for(int i=n; i>=1; i--){
        //     char ch='A';
        //     for(int j=1; j<=i; j++){
        //         cout<< ch;
        //         ch++;

        //     }
        //     cout<<endl;
        //  }

        // reverse method m-3

            for(int i=n; i>=1; i--){
            // char ch='A';
            for(char ch='A'; ch<='A'+i-1; ch++){
                cout<< ch;

            }
            cout<<endl;
         }

    }
};
191. Inverted Alphabet Triangle Pattern
class Solution {
public:
    void printAlphabetTriangle(int n) {

        for (int i = 1; i <= n; i++) {        // Loop for each row

            for (int j = 0; j < i; j++) {     // Print i characters in row i
                char ch = 'A' + j;            // Convert number to alphabet
                cout << ch;                   // Print character
            }

            cout << endl;                     // Move to next line after each row
        }
    }
};

190. Alphabet Triangle Pattern


class Solution {
public:
    void printFloydsTriangle(int n) {
        // Implement the pattern printing logic 
        int count=1;
        for(int row=1; row<=n;row++){
            for(int col=1;col<=row; col++){
               cout<<count<<" ";
               count++;
            }
            cout<<endl;

        }
    }
}; 
184. Floyd’s Triangle Pattern
class Solution {
public:
    void printNumberPyramid(int n) {
        // Implement the pattern printing logic here
        for(int row=1; row<=n; row++){
            //space 
            for(int col=1; col<=(n-row ); col++){
                cout<<" ";

            }
            //star
            for(int col=1; col<= row ; col++){
                cout<< col << " ";

            }
            cout<<endl;

        }

    }
};
  


183. Number Pyramid Pattern
class Solution {
public:
    void printPattern(int n) {
        for(int row=1; row<=n ; row++){
           // number 
            for(int col=1; col<=row ; col++){
                cout<<col;
            }

            //space 
             for(int col=1;col<=2*(n-row); col++){
                cout<<" ";
            }

            // space
            //  for(int col=1; col<=n-row ; col++){
            //     cout<<" ";
            // }

            // number
            // int row = n;
             for(int col=row; col>=1;col--){
                cout<<col;
                
            }

            cout<<endl;

        }
        
    }
};
189. Symmetric Number Pyramid
class Solution {
public:
    void printNumberTriangle(int n) {
        // Implement the pattern printing logic here
        for(int row=1; row<=n; row++){
            for (int col=1; col<=row ; col++){
                cout<<row;

            }
            cout<<endl;

        }

    }
};






// class Solution public:
// void printNumberTriangle(int n) {
// // Logic → structure same as right angle trangle question, value is. number instead of a star
// //outer Loop
// for (int row=1; rowen; row++) {
// //inner Loop +> structure same as RAT
// for (int col=1; colcerow; col++) {
// //value kya print hat, star nahi krna hi row ki value print krni has per observation in slide cout « row;
// //next line cout « endl;
// J；
188. Number Triangle Pattern
class Solution {
public:
    void printRhombus(int n) {
        // Implement the pattern printing logic here
        for(int row=1; row<=n; row++){
            for(int col=1; col<=n-row; col++  ){
                cout<<" ";

            }
            for(int col=1; col<=n; col++){
                cout<<"* ";

            }
            cout<<endl;
        }
    }
};
181. Rhombus Pattern
180. Butterfly Pattern
class Solution {
public:
    void printHollowDiamond(int n) {

        // ---------- Upper Half ----------
        for (int i = 1; i <= n; i++) {

            // Print leading spaces
            for (int space = 1; space <= n - i; space++) {
                cout << " ";
            }

            // Print stars
            if (i == 1) {
                // First row has only one star
                cout << "*";
            } else {
                // Print first star
                cout << "*";

                // Print inner spaces (hollow part)
                for (int space = 1; space <= 2 * i - 3; space++) {
                    cout << " ";
                }

                // Print second star
                cout << "*";
            }

            cout << endl;
        }

        // ---------- Lower Half ----------
        for (int i = n - 1; i >= 1; i--) {

            // Print leading spaces
            for (int space = 1; space <= n - i; space++) {
                cout << " ";
            }

            // Print stars
            if (i == 1) {
                cout << "*";
            } else {
                cout << "*";

                for (int space = 1; space <= 2 * i - 3; space++) {
                    cout << " ";
                }

                cout << "*";
            }

            cout << endl;
        }
    }
};

179. Hollow Diamond Pattern

class Solution {
public:
    void printSolidDiamond(int n) {
        // -------------------------------
        // PART 1: Upper Pyramid (Rows 1 to n)
        // -------------------------------
        for (int i = 1; i <= n; i++) {
            
            // Print leading spaces
            // Formula: n - current_row_number
            for (int j = 1; j <= n - i; j++) {
                cout << " ";
            }
            
            // Print stars
            // Formula: 2 * current_row_number - 1
            for (int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }
            
            // Move to next line
            cout << endl;
        }

        // -------------------------------
        // PART 2: Lower Inverted Pyramid (Rows n-1 down to 1)
        // -------------------------------
        for (int i = n - 1; i >= 1; i--) {
            
            // Print leading spaces
            // Same logic as above works because we are decrementing i
            for (int j = 1; j <= n - i; j++) {
                cout << " ";
            }
            
            // Print stars
            for (int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }
            
            // Move to next line
            cout << endl;
        }
    }
};
178. Solid Diamond Pattern
/*
 * HOLLOW PYRAMID PATTERN - Quick Revision Notes
 * =============================================
 * Pattern Structure (n=5):
 *     *           row=1: 4 spaces, 1 star
 *    * *          row=2: 3 spaces, 2 stars (hollow)
 *   *   *         row=3: 2 spaces, 2 stars (hollow)
 *  *     *        row=4: 1 space, 2 stars (hollow)
 * * * * * *       row=5: 0 spaces, 9 stars (full base)
 * 
 * KEY FORMULAS:
 * - Leading spaces: (n - row)
 * - First row: Only 1 star
 * - Last row: (2*n - 1) stars
 * - Middle rows: 2 stars with (2*row - 3) spaces between them
 * 
 * REMEMBER: Each star is followed by a space for consistent spacing!
 * TIME COMPLEXITY: O(n²) | SPACE COMPLEXITY: O(1)
 */

class Solution {
public:
    void printHollowPyramid(int n) {
        for(int row = 1; row <= n; row++) {
            
            // Print leading spaces
            for(int col = 1; col <= n - row; col++) {
                cout << "  ";
            }
            
            // Print stars based on row position
            if(row == 1) {
                cout << "* ";
            }
            else if(row == n) {
                for(int col = 1; col <= (2*n - 1); col++) {
                    cout << "* ";
                }
            }
            else {
                cout << "* ";
                for(int col = 1; col <= 2*row - 3; col++) {
                    cout << "  ";
                }
                cout << "* ";
            }
            
            cout << endl;
        }
    }
};

177. Hollow Pyramid Pattern
class Solution {
public:
    void printInvertedSolidPyramid(int n) {
        // Implement the pattern printing logic here
        for(int row=1; row<=n ; row++){
            // space 
            for(int col=1; col<=row-1 ; col++)
            {
                cout<<"  ";
            }
            // star 
            for(int col=1; col<= (2*n -(2*row-1)); col++ ){
                cout<<"* ";

            }
            cout<<endl;

        }

    }
};
176. Inverted Solid Pyramid Pattern
class Solution {
public:
    void printSolidPyramid(int n) {
        // Implement the pattern printing logic here
        for(int row =1; row<=n; row++){
            // space 
            for(int col=1; col<=(n-row); col ++){           // (n-row)
                cout<<"  ";
            }
            // star 
            for(int col=1; col<=(2*row-1); col++){              // (2*row-1)
                cout<<"* ";
            }
            cout<<endl;
        }

    } 
};
175. Solid Pyramid Pattern
class Solution {
public:
    void printHollowRightAngleTriangle(int n) {
        // Implement the pattern printing logic here
        for(int i=1; i<=n; i++){                // start by i=1 
            if( i==1 || i==2|| i==n){           // int not 
                for(int j=1; j<=i ; j++){
                    cout<< "* ";
                }
            }
            else{
                cout<<"* ";
                for(int j=1; j<=i-2 ; j++){
                    cout<<"  ";                     // dont print * here 
                }
                cout<<"* ";
                }
            cout << endl;                 // put new line -- go in nect line
        }

    }
};
174. Hollow Right-Angle Triangle Pattern
class Solution {
public:
    void printInvertedRightAngleTriangle(int n) {
        // Implement the pattern printing logic here
        for(int i=1; i<=n;i++){
            for (int j=1; j<=(n-i+1); j++){
                cout<<"* ";

            }
            cout<<endl;
            
        }
    }
};
173. Inverted Right-Angle Triangle Pattern
class Solution {
public:
    void printRightAngleTriangle(int n) {
        // Implement the pattern printing logic here
        for(int i=1; i<=n;i++){
            for(int j=1; j<=i;j++){
                cout<<"* ";

            }
            cout<<endl;
            
        }
    }
};
172. Right-Angle Triangle Pattern
class Solution {
public:
    void printHollowRectangle(int n, int m) {
        // Iterate through each row
        for (int i = 0; i < n; i++) {
            // Iterate through each column
            for (int j = 0; j < m; j++) {
                
                // Check boundary conditions:
                // i == 0     -> First Row
                // i == n - 1 -> Last Row
                // j == 0     -> First Column
                // j == m - 1 -> Last Column
                if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                    cout << "* ";
                } else {
                    // Print two spaces for the hollow area to maintain alignment
                    cout << "  ";
                }
            }
            // Move to the next line after printing a full row
            cout << endl;
        }
    }
};
171. Hollow Rectangle Pattern


class Solution {
public:
    void printSolidRectangle(int n, int m) {
        for(int i=1; i<=n;i++){
            for(int j=1; j<=m;j++){
                cout<<"* ";
            }
            cout<< endl;
        }
    }
};

170. Solid Rectangle Pattern


class Solution {
public:
    void printHollowSquare(int n) {
        // Implement the pattern printing logic here
        // 1. row =1|| row=n --> print n* 
        // 2. else print - > for middle wale rows --> 1*, (n-2)space , 1* print
        for(int row=1; row<=n; row++){
            if (row==1 || row ==n){
                for(int col=1; col<=n; col++){
                    cout<<"* ";
                }
            }
           else
            {
            cout<<"* ";
            for(int col=1; col<=(n-2); col++){
                cout<<"  ";   // 2 space 
            }
            cout<<"* ";
            }
            cout<<endl;
        }
    }
};


169. Hollow Square Pattern


class Solution {
public:
    void printSquare(int n) {
        // User to fill this part
        for(int i=1; i<=n; i++){
            for (int j=1; j<=n;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};    

8. Solid Square Pattern