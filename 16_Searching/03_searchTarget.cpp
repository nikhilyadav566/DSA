//  Search target value in array 

#include<iostream>
using namespace std;

int binarySearch(int arr[], int target, int size){
   int start = 0;
   int end = size-1;

   while(start<=end){
    int mid = (start+end)/2;      //  int mid = start + (end-start)/2;  use like this way instread of it.

    if(target == arr[mid]){   // element found, then return index
        return mid;
    }
    //  Search in right direction
    else if(target>arr[mid]){
        start = mid+1;
    }
    //  Search in left direction
    else{
        end = mid-1;
    }
   }
    return -1;
}


int main(){

    int arr[] = {2,4,6,8,10,12,16,21};
    int size = 8;
    int target = 12;

    

    int indexOftarget = binarySearch(arr, target, size);

    if(indexOftarget == -1){
        cout<<"target not found"<<endl;
    }
    else{
        cout<<"target is found at "<<indexOftarget<<" index"<<endl;
    }

    return 0;
}


//  Output
// target is found at 5 indextarget is found at 5 index


//   Note :-> int mid = (start+end)/2; (here is a chance of overflow of int )
//       so we write like this

//   int mid = start + (end-start)/2;
//  both has same output.