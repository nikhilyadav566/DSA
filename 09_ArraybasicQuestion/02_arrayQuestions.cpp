// Write a C++ program to take 5 integer elements as input in an array and print the double of each element.


#include<iostream>
using namespace std;

int main(){

    int arr[5];

    // taking input
    cout<<"Enter five elements"<<endl;
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    // printing their doubles
    cout<<"Double: ";
    for(int i=0; i<5; i++){
        cout<<2*arr[i]<<" ";
    }

    return 0;
}

//  Output 

// Enter elements
// 2 3 4 5 6
// 4 6 8 10 12