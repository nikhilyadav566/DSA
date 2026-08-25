//  Array -> effectively passed by reference

//  When you pass an array to a function, the function can modify the original array.

#include<iostream>
using namespace std;

void change(int arr[]){
    arr[0] = 100;
    cout<<arr[0]<<endl;
}

int main(){

    int arr[3] = {2,3,5};

    change(arr);

    cout<< arr[0];

}

//  Output
//  100
//  100