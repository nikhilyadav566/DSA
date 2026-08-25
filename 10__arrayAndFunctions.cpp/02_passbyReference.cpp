//  Another way

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void increment(int arr[], int size){
    arr[0] = 50;

    printArray(arr, size);
}


int main(){

    int arr[] = {5,6};
    int size = 2;
    increment(arr, size);

    printArray(arr, size);
}


// Output

// 50 6 
// 50 6