// tips1 -> i learn to use this -> g++ main.cpp  {to run the code use g++ } then --> ./a.out
// g++ main.cpp
// ./a.out
 
#include<iostream>
using namespace std;

int main (){
    int a = 5;
    // int val =(--a)*(a--); 
    int b = --a;
    int c = a--;
    int val = b*c;

    cout<< val << endl;

}

 
