//   Typecasting:->
//                 Type casting is the process of converting a value from one data type to another data type.
//   There are two types of TypesCasting
//  1. Implicit Type Casting :-> The compiler automatically converts one type to another.
//  2. Explicit Type Casting :-> You manually tell the compiler to convert the type.

#include<iostream>
 using namespace std;
 
 int main(){

 // 1. Implicit
    char ch = 97;         // here the value is in integer datatype and store in chat
    cout<<ch<<endl ;     // output will be 'a' 

    // it convert it's value in character form

    int num = 'b';      // 'b' (character) -> converted to its character code 
    cout<<num<<endl;   // output :-> 98 convert in integer form

// 2. Explicit

    double a = 45.65;
    int b = (int) a ;    // convert the value of a into int and store it in b  or we can say convert a into integer
    cout<<b<<endl;    //output 45
 }
        
//  Implicit → Compiler converts automatically

//  Explicit → Programmer converts manually