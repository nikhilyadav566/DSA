// left & right shift operator

//  <<  :-> it is left shift
//  >> :-> it is right shift

//   Suppose 
//     a=5
//     and if the binary of it is 00000000101

//     And while apply left shift (<<) operator then beside the last bit of memory 1  attach 0 and it will be 
//         000000001010
    
//    Note :-> also while use multiple times '<<' operator no. of zeros will increases beside 1.

#include<iostream>
using namespace std;

int main(){

    int a = 12;   //  a variable store 12 as integer form
    a=a<<1;          // here 'a' will be left shift by 1 that's why
    cout<<a<<endl;      // output :-> 24 

    // In the last digit of binary no. of 12 attach 0 (means not sum only keep beside ) because there is one times left shift used 
//  After attaching 0 the binary no will be equal to the binary no. of 24 that why it's output is 24.

   int b = 12 ;
   b = b<<2;         // here two time use left shift
   cout<<b<<endl;     // Output:-> 48

//  Note :-> So we can say that in left shift there is the  mulutiply by 2 in given no. 
// like as while we use one time left shift operator then its value became 24
// and 2nd exmple while use two time left shift operator then it's value became 48
//   here 12*1->24          (1 means use left shift first time)
//        12*2->48  (12*1->24, 24*1->48)          -> Similarly  2 means left shift is used for two times

}

// we can say  -> if we apply left shift operator it will be multiply by 2
// << -> multiply by 2

//  Right shift will be in next file
