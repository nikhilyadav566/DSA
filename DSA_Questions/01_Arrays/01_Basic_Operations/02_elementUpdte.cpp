//  update an element at index
#include<iostream>
using namespace std;

int main(){

    int arr[] = { 2,4,5,6,7,9};

    int size = sizeof(arr)/sizeof(arr[0]);

    int index;
    cout<<"Enter index which element do you want to update"<<endl;
    cin>>index;

    int value;
    cout<<"Enter new value"<<endl;
    cin>>value;

    if(index >= 0 && index < size){
        arr[index] = value;

        cout<<"Updated array"<<endl;

        for(auto value : arr){
            cout<<value<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"Invalid index!"<<endl;
    }
    return 0;
}

// Enter index which element do you want to update
// 4
// Enter new value
// 102
// Updated array
// 2 4 5 6 102 9 