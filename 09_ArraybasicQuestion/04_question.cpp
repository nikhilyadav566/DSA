// Take an input elements and replace each element with 1 .

#include<iostream>
using namespace std;

int main(){

    int arr[500];

    int n;
    cout<<"How many elements "<<endl;
    cin>>n;

    cout<<"Enter your elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        arr[i] = 1;
    }

    cout<<"Output: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}