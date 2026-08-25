//  set kth bit

#include<iostream>
using namespace std;

int setKthBit(int N, int K){
    int mask = 1<<K;
    int ans = N|mask;
    return ans;
}

int main(){

    int n,k;
    cout<<"Enter Number "<<endl;
    cin>>n;
    cout<<"Enter Kth value"<<endl;
    cin>>k;

    cout<<setKthBit(n,k);

}


// How does it work

// Step1: ->  Take the given number n
//             Suppose: n=15 , k=5

// Step2: ->  Convert n to binary
//             15 = 001111
            
// Step3: ->  count bit positions from right to left , starting from 0
//             Position:  5 4 3 2 1 0   
//             Binary:    0 0 1 1 1 1
//         we want to set position 5.

// Step4: ->  Create a 1 separately
//             1 = 000001

//         Then shift it k = 5 positions to the left
        
//         000001 -> 000010 -> 000100 -> 001000 -> 010000 -> 100000
        
//         So: 1 << 5 =100000

//         This is our mask.

// Step5: Apply OR between n and the mask
//         n    = 001111
//         mask = 100000
//               ---------
//          OR  = 101111

//      Therefore 101111 = 47     


// in short way 

// Given n -> choose bit position k -> create 1 << k -> this create the mask -> OR mask with n -> result.

//  NOTE:->  K tells you how many positions to shift the 1.

