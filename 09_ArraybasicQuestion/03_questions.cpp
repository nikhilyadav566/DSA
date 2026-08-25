// Write a C++ program that asks the user how many integer elements they want to enter, takes those elements into an array, 
//    and prints the double of each element. Assume the maximum number of elements is 500.

#include<iostream>
using namespace std;

int main(){

    int arr[500];

    int n;
    cout<<"How many numbers you want to add in array"<<endl;
    cin>>n;

    cout<<"Enter your elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    cout<<"Doubles: ";
    for(int i=0; i<n; i++){
        cout<<2*arr[i]<<" ";
    }

    return 0;
}

// How many numbers you want to add in array
// 3  
// Enter your elements
// 1 2 3
// Doubles: 2 4 6 