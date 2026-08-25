// Taking elements and size as input in Arrays

#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter array size: "<<endl;
    cin>>n;
    
    // it's bad practice instead of it create static array just like next file
    int arr[n];   // array of size n
    
    cout<<"Enter array elements:"<< endl;
    //  taking input in array
    for(int i=0; i<n; i++){
        cin >> arr[i];       
    }
    //    printing
    cout<<"Array elements are: ";
    for(int i=0; i<n; i++){
        cout << arr[i]<< " ";
    }
    
    return 0;
}   

// Enter array size: 
// 4
// Enter array elements:
// 7 8 9 10
// Array elements are: 7 8 9 10 


//   How does it work 

// Step:1 -> (int n) => This creates an integer variable named n.
// Step:2 -> then cin>>n 
// Step:3 -> int arr(n)  =>  it create array of size n.
// Step:4 -> First loop takes input
//        like as 

//   while n = 5;
//   the loop works like this:

//        First iteration:
//        i = 0
//       cin>>arr[0]
//     then you enter 10 as an input at 0 index

//        Second iteration:
//         i = 1
//        cin>>arr[1]
//       then enter 20

//   Similarly i = 2 -> arr[2] = 30
//             i = 3 -> arr[3] = 30
//             i = 2 -> arr[4] = 40
//             i = 2 -> arr[5] = 50


//    Now the array will be like this:
//   Index:  0   1   2   3   4
//   Array:  10  20  30  40  50

//   When i becomes 5:
//    i<n
//    i<5

//    then it is false , so the loop stops

//  Step:5 -> Second loop prints the elements

//    Again , i goes from 0 to 4.
//     So it prints:

//  arr[0]->10
//  arr[1]->20
//  arr[2]->30
//  arr[3]->40
//  arr[4]->50

// Output:
//         10 20 30 40 50


//       The  Whole Process

//       User enters size 
//          n=5
//      Create array with 5 elementss
//      arr[0] arr[1] arr[2] arr[3] arr[4]
//      Take input using loop
//      10 20 30 40 50 
//      Print using another loop
//      10 20 30 40 50 