//  Move all -ve numbers to left side of an array.

#include<iostream>
using namespace std;

int moveAllNegToLeft(int arr[],int n){
    // Dutch National flag Algo
    int start = 0, end = n-1;
    while(start<end){
        if(arr[start]<0){
            start++;
        }
        else if(arr[end]>=0){
            end--;
        }
        else{
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}



int main(){

    int arr[]={1,2,-6,4,-3,0,-4,-7};
    int n = sizeof(arr)/sizeof(int);    // 48/8

    moveAllNegToLeft(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

//   OUTPUT

// -7 -4 -6 -3 4 0 2 1