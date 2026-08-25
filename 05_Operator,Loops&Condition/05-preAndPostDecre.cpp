//  Pre-decrement :-> In it first decrement in value and then use it .
//  Post-decreement :-> In it first use the value and then decrement it.

#include<iostream>
using namespace std;

int main(){

   // Pre-decrement 
    int a=6;
      --a;
    cout<<a<<endl;  // output -> 5
    //  In it first value '6' will decrement by 1 which will be 5 and then goes to the memory which will be 5.


    // Post-decrement
    int b = 10;
       b--;
    cout<<b<<endl;  // output -> 9
    //  In it first value '10' goes to the memory and then decrement by 1 and will became 9.  
    
}
