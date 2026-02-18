// Nested loop example in 10 different ways--> 


// 1. Classic Nested For Loops
// #include <iostream>
// using namespace std;

// int main(){
//     for(int i = 0; i <3 ; i ++ ){
//         for (int j=0;j<3;j++){
//             cout<<"i="<<i<<",j="<< j<<endl;

//         }
//     }
//     return 0;

// }

// op 
// i=0,j=0
// i=0,j=1
// i=0,j=2
// i=1,j=0
// i=1,j=1
// i=1,j=2
// i=2,j=0
// i=2,j=1
// i=2,j=2

// 2. While Loop Inside For Loop
// #include <iostream>
// using namespace std;

// int main(){
//     for (int i=0; i<3; i++ ){
//         int j=0;
//         while(j<3){
//             cout<<"i="<< i<<",j="<<j<< endl;
//             j++;

//         }
//     }
//     return 0;

// }

// op
// i=0,j=0
// i=0,j=1
// i=0,j=2
// i=1,j=0
// i=1,j=1
// i=1,j=2
// i=2,j=0
// i=2,j=1
// i=2,j=2

// 3. For Loop Inside While Loop
// #include <iostream>
// using namespace std;

// int main(){
//     int i =0;
//     while( i<3 ){
//         for(int j=0; j<3 ; j++){
//             cout<<"i="<<i<<",j="<<j<<endl;
//         }
//         i++;
//     }
//     return 0;
// }

// op
// i=0,j=0
// i=0,j=1
// i=0,j=2
// i=1,j=0
// i=1,j=1
// i=1,j=2
// i=2,j=0
// i=2,j=1
// i=2,j=2

// 4. Nested While Loops
// #include<iostream>
// using namespace std;
// int main(){
//     int i=0;
//     while(i<3){
//         int j=0;
//         while(j<3){
//             cout<<"i="<<i<<",j="<<j<<endl;
//             j++;
//         }

//         i++;

//     }
//     return 0;
// }
// op
// i=0,j=0
// i=0,j=1
// i=0,j=2
// i=1,j=0
// i=1,j=1
// i=1,j=2
// i=2,j=0
// i=2,j=1
// i=2,j=2

// 6. Triple Nested Loops (3D)
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             for(int k=0; k<2; k++){
//                 cout<<"i="<<i<<",j="<<j<<",k="<<k<<endl;

//             }
//         }

//     }

//  return 0;
// }

// // output 
// i=0,j=0,k=0
// i=0,j=0,k=1
// i=0,j=1,k=0
// i=0,j=1,k=1
// i=1,j=0,k=0
// i=1,j=0,k=1
// i=1,j=1,k=0
// i=1,j=1,k=1

// 7. Nested Loops with 2D Array  (with comma in last ",")
// #include<iostream>
// using namespace std;
// int main(){
//     int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};

//     for(int i=0; i<3; i++){
//         for(int j=0; j<3 ; j++){
//             cout<<matrix[i][j]<<",";
//         }
//         cout<<endl;

//     }
//     return 0;
// }

// op
// 1,2,3,
// 4,5,6,
// 7,8,9,





// 7. Nested Loops with 2D Array(without comma in last  )
// #include<iostream>
// using namespace std;
// int main(){
//     int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};

//     for(int i=0; i<3; i++){
//         for(int j=0; j<3 ; j++){
//             cout<<matrix[i][j];
//             if(j!=2){
//                 cout<<",";
//             }
//         }
//         cout<<endl;

//     }
//     return 0;
// }

// // output
// 1,2,3
// 4,5,6
// 7,8,9


// 8. Nested Loops Creating Pattern (for loop inside for loop  )
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1; j<=i; j++){
//             cout<< "*";

//         }
//         cout<<endl;

//     }
//     return 0;
// }

// op

// *
// **
// ***
// ****
// *****

// 9. Range-based For Loops (C++11)
// #include <iostream>
// #include<vector> 
// using namespace std;

// int main (){
//     vector<string> colors = {"red", "blue", "green"};
//     vector<string> sizes ={"small","large"};

//     for(const auto& color : colors){
//         for(const auto& size : sizes) {
//             cout<<color <<" "<<  size << endl;
        
//         }
//     }
//     return 0;

// }

// op //
// red small
// red large
// blue small
// blue large
// green small
// green large



// 10. Nested Loops with Break/Continue
#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(j==2)continue;
            if(i==3) break;
            cout<<"i="<<i<<",j="<<j<<endl;

        }

    }


return 0;

}

// output
// i=0,j=0
// i=0,j=1
// i=0,j=3
// i=1,j=0
// i=1,j=1
// i=1,j=3
// i=2,j=0
// i=2,j=1
// i=2,j=3













