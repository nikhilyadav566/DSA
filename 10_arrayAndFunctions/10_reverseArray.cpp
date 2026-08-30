//  Reverse in Array

#include<iostream>
using namespace std;

int main(){

    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int size = 10;

    int start = 0;
    int end = size - 1;

    while(start<=end){
        // step1:
        swap(arr[start],arr[end]);
        // step2:
        start++;
        end--;
    }

    // printing array
    for(int i=0; i<size; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl ;

    return 0;
}

//   Output
//   100 90 80 70 60 50 40 30 20 10