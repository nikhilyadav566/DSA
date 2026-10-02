// Write a C++ program to take 5 integer elements as input in an array and print the double of each element.

#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};
    int size = 5;

    cout<<"Double of each elements"<<endl;
    for(int i=0; i<size; i++){
        arr[i] = 2*arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}