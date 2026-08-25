// Pass by reference to the original variable.
//  The function receives a refrence to the original variable

#include<iostream>
using namespace std;

void change(int &x){
    x = 100;
    cout<<x<<endl;
}


int main(){

    int a = 10;

    change(a);

    cout<<a;
}

// Output

// 100
// 100

//  Note :-> The function changed x, and because x refers to a, 
//               'a' also changes.

//   Reference -> original -> changes are visible in main().


//                   Concept in one line

//     Pass by value = function works on  a copy.
//     Pass by reference = function works with the original.