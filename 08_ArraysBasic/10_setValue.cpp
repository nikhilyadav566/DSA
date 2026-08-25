// set value in array

#include<iostream>
using namespace std;

int main(){

    int arr[10] = {1,2,3,4};

    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

// output:
//       1 2 3 4 0 0 0 0 0 0
 
//  Note :-> The remaining size will be filled by 0 where elements are are not present

