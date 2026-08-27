// "Write a C++ program to search for an element in an array using Linear Search."

#include<iostream>
using namespace std; 

bool find(int arr[], int size, int key){
        for(int i=0; i<size; i++){
            if(arr[i]==key){
                return true;
            }
        }
                return false;
}


int main(){

    int arr[] = {4,5,6,7,8,9,10};
    // int arr[] = {4,5,6,7,8,9,10}     we can also type like this 
    int size = 7;


    cout<<"Enter key to find out"<<endl;
    int key;
    cin>>key;

    if(find(arr, size, key)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}
