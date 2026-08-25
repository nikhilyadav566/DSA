//  Taking only input elements in Array

#include<iostream>
using namespace std;

int main(){

    // static array
    int arr[5];

     //  taking input in array
    cout<<"Enter the input value in array"<<endl;

    for(int i=0; i<5; i++){
        cin>>arr[i];      
    }

    // printing
    cout<<"printing the values in array"<<endl;

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//   Output

// Enter the input value in array
// 4 5 6 1 2
// printing the values in array
// 4 5 6 1 2 



