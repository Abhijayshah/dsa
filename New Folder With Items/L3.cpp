#include<iostream>
using namespace std;

void nestedIfExample() {
    int age = 20;
    if (age >= 18) {
        cout << "You are an adult";
        if (age >= 21) {
            cout << " and can legally drink.\n";
        } else {
            cout << " but cannot legally drink.\n";
        }
    } else {
        cout << "You are a minor.\n";
    }
}


int main (){


// // Question 01  : 
// 1-> Monday
// 2-> tue
// 3 -> wed
// 4-> thu
// 5-> fri
// 6->sat
// 7-->sun
// int index=1;


// int index =3;

// if (index ==1 ){
//     cout<< " monday";
// }
// else if (index == 2){
//     cout<< " tuesday ";
// }
// else if (index == 3){
//     cout<< " wednesday";
// }
// else if (index==4){
//     cout<<" thursday";
// }
// else if(index==5){
//     cout<<"friday";
// }
// else {
//     cout<< " hello" ;

// }





// Question : 2
// nested if example 
// nested if example
// void nestedIfExample() {
//     int age = 20;
//     if (age >= 18) {
//         cout << "You are an adult";
//         if (age >= 21) {
//             cout << " and can legally drink.\n";
//         } else {
//             cout << " but cannot legally drink.\n";
//         }
//     } else {
//         cout << "You are a minor.\n";
//     }
// }

// Call nestedIfExample() from main to run this example.
// nestedIfExample();



// //  Question : 3
// int age = 21;
// int value = (age>18 )? 50: 100;
// cout<< "value:" << value << endl;

// int age = 21; // show error if declare again 
// (age > 18) ? cout << "Hel11o" : cout << "No Hello";
// // cout << "Value: " < value << endl;




// Question : 4 

// switch case
int index = 40;

switch(index){
    case 1: cout<< " Monday"<< endl; break;
    case 2: cout<< " tue"<< endl;break;
    case 3: cout<< " wed"<< endl;break;
    case 4: cout<< " thu"<< endl;break;
    case 5: cout<< " fri"<< endl;break;
    case 6: cout<< " sat"<< endl;break;
    case 7: cout<< " sun"<< endl;break;
    default: cout<< " baddarday"<< endl;
    
}


return 0;
} 







 
