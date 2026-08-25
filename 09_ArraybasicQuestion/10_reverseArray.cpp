// Take n elements and print them in reverse order. 

#include<iostream>
using namespace std;

int main(){

    int arr[10];

    int n;
    cout<<"Enter size of elements"<<endl;
    cin>>n;

    cout<<"Enter your elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Reverse: ";
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<< " ";
    }

    


    return 0;
}


// Enter size of elements
// 6
// Enter your elements
// 4 5 6 7 8 9
// Reverse: 9 8 7 6 5 4 