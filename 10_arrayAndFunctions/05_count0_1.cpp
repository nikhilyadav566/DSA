//Count 0's and 1's in Array

#include<iostream>
using namespace std;

int printCount(int arr[], int size, int num){
    int count = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==num){
              count++;
        }  
    }
         return count;

}


int main(){

    int arr[] = {0,0,1,0,1,1,1,0,0};
    int size = 9;

    cout<<"Choose which one do you want to get count no 0 or 1"<<endl;
    int num;
    cin>>num;

   cout<<"Count = "<<printCount(arr, size,num)<<endl;


   return 0;
}

// Output
// Choose which one do you want to get count no 0 or 1
// 0
// Count = 5