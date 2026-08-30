// There are four types of bitwise operator
// 1. AND  &
// 2. OR   |
// 3. NOT   ~      (in logical operator we study this is '!' NOT operator but in Bitwise '~'this is NOT operator which is called tilda) but same work.
// 4. XOR   ^

// in XOR operator -> output will be same on same value.

//  like as
//   a b  XOR
//   0 0 -> 0
//   1 0 -> 1
//   0 1 -> 1
//   1 1 -> 0

#include<iostream>
using namespace std;

int main(){

    bool a = true;    
    bool b = false;

    cout<<(a&b)<<endl;    // output :-> 0 which means false 
    cout<<(a|b)<<endl;   // 1 which means true
    cout<<~(a&b)<<endl;      // -1
    cout<<(a^b)<<endl;    // 1

    cout<<(2&3)<<endl;   //  2
    //  As we know that the binary no of 2 and 3 are 10, and 11 and while find out the AND of these it will be '10'(this is binary no.) which is equal to 2 
    //      1 0
    //    & 1 1
    //     _______
    //      1   0        as we know In AND operator both conditiion should be true

    cout<<(5&10)<<endl;    // 0
    //    Similarly the binary no. of 5 and 10 are (101 and 1010) and after use AND its output will be (0000) which is equal to 0 that why it's output will 0
}


//   If the least significant bit(means last right bit) will 0 then no will be even .
//   And while least significant bit will be 1 then that no. will be odd.

//  Examples :-
//  0101010   -> here least bit is 0 so the no. will be even whereas
//  0101011   -> bit last bit is 1 here so no. will be odd