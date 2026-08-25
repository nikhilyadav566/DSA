#include<iostream>
using namespace std;

int main(){

    int arr[10] = {0};
    // int arr[10] = {1};

    for(int i=0; i<10; i++){
        cout<< arr[i]<<" ";
    }

    return 0;
}

// output
// 0 0 0 0 0 0 0 0 0 0 


// while use this  int arr[10] = {1};
// then output will be 
//                    1 0 0 0 0 0 0 0 0 0 