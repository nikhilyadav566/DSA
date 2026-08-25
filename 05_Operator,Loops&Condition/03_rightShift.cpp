// right shift Operator
//  >> -> indicate by this symbol

//  In this operator last bit of memory is moved from last to front in memory.
// like as :
//    a = 8;
//    and if it's binary no. is like this 00001000
//    a>>1    after using right shift operator
//    binary no. will be like this  00000100

// Note:-> here last zero of binary will be remove and come to the front side after use right shift operator.

#include<iostream>
using namespace std;

int main(){
    int a = 8;
     a=a>>1;       // here used shift operator 1st times
    cout<<a<<endl;     // output will be 4

    // After applying right shift operator first timee 
    // the binary no. of 8 will become to the equal of binary no. of 4
    // that's why its output is 4

    int b = 16;      
     b = b>>2;   // here apply two times right shift operator
     cout<<b<<endl;   // output will be 4

     // after applying 2nd times right shift operator here firstly first times right shift happen,
     // and then 2nd shift apply due to this it becomes from 16->4.
}

//  But why does it not called 
//  >> -> divide by 2
//  right shift means divided by 2


// Because Firstly As we know that the first bit of negative in memory is 1
// so while apply right shift operator on negative no.its binary no. will be like this in memory
//      1 0 0 0 0 0 0 0 1   (-ve no)  
//  And if we use >> (right shift operator) then its will be like this 
//      0 1 0 0 0 0 0 0 0    (+ve no)
//  There will be create high value positive no will create .

// So we can understand that if we divide any -ve no, then it's output will not be positive with high value.

// that's why we can say that shift operator means not assume that divide it by 2.