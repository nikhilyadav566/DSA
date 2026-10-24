// Peak element in a Mountain Array

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr{0,5,10,8,4,2,1};

    int start = 0;
    int end = arr.size()-1;
   
    while(start<=end){

       int mid = start+(end-start)/2;

        if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }
        else{ 
            end = mid - 1;
        }
    
    }

    cout<<start<<"nd index is Peak element "<<endl;;   // which is 10
    

    return 0;
}

//            OUTPUT
//    2nd index is Peak element