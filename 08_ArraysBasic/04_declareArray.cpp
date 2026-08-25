#include<iostream>
using namespace std;

int main(){

    int arr[7];
    cout<<"Array created successfully"<<endl;
    cout<<arr<<endl;   // To find the first memory location (base address) of arr variable
    cout<<&arr<<endl;    // To find the entire memory location (base address) of arr variable

    return 0;
}

// Output
//  Array created successfully
//  0x61fef4
//  0x61fef4