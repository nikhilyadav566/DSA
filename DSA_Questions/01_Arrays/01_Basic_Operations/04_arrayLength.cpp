// Find length of array

#include<iostream>
using namespace std;

int main(){

    int arr[] = {2,3,4,5,6,7};
    
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array length = "<<length<<endl;

    return 0;
}

// Output

// Array length = 6