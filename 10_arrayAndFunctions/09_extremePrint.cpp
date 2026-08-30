// Extreme Print in Array (It's may be called Two Pointers Approach)


#include<iostream>
using namespace std;

int main(){

    int arr[] = { 10,20,30,40,50,60,70,80,90,100,110};
    int size = 11;

    int start = 0;
    int end = size-1;

    while(start<=end){
        if(start>end){
            break;
        }
        if(start==end){
            cout<<arr[start]<<" ";
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }

    return 0;
}


//  Output 

//  10 110 20 100 30 90 40 80 50 70 60


