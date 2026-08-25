// Initialisation Of Array

// int arr[] = {2,4,6,9,12};

#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,4,6,8,12};
    int brr[4] = {2,3,4,8};
    int crr[10] = {2,4,9,12,14};
    // error
    // int drr[2] = {2,4,5};
    cout<<"Array initialised successfully"<<endl;
    
    return 0;
}

//  Note:->
//
// 1. int arr[] variable:  The size is not specified, so the compiler 
//    automatically determines the size based on the number of values.
//    Here , 5 elements are stored: 2,4,6,8,12.

// 2. int brr[4] variable:  4 elements of memore are created,
//         and the values 2,3,4,8 are stored.

// 3. int crr[10] variable: Space for 10 elements is created,
//       but only 5 values are provided.
//    The remaining elements are automatically intialized to 0.
//     2,4,9,12,14,0,0,0,0,0

// 4. int drr[2] variable: Space for only 2 elements is created,
//       so it cannot store more than 2 values.

//     Therefore, this gives an error:
// int drr[2] = {2, 4, 5}


//  NOTE:-> 
//        These are static array in which an array whose size is fixed when it is created and cannot be changed later.
//      int arr[5] = {10,20,30,40,50};
//      5 -> fixed size

//    int arr[] = {1,2,3};
//    automatically determined  -> 3
//    It is static array because its size is fixed after creation.

//        Let's study dynamic array in next file