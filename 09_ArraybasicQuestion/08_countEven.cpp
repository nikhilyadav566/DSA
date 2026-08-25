//  Take n elements and count how many elements are even.

#include<iostream>
using namespace std;

int main(){

    int arr[10];

    int n ;
    cout<<"Enter number size"<<endl;
    cin>>n;

    cout<<"Enter array elements"<<endl;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
          count++ ;      //  Increase the count by 1 whenever an even number is found 
        }     
    }   
     cout<<"Even numbers = "<<count<<endl;

}

// Enter number size
// 6
// Enter array elements
// 4 8 2 6 3 4
// Even numbers = 5