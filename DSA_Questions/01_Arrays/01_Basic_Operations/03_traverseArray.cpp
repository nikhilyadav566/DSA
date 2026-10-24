//  Traverse the array
#include<iostream>
using namespace std;

int main(){

    int arr[] = {2,3,5,6,7,8,9};

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size;  i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

// output 

// 2 3 5 6 7 8 9