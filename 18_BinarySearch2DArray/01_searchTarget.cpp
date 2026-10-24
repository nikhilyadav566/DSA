// Find target in 2D array by using binary search

#include<iostream>
using namespace std;

bool searchTarget(int arr[][4], int target, int rows, int cols){
    int start = 0;
    int end = rows*cols-1;
    
    while(start<=end){
        int mid = start+(end-start)/2;
        int rowsIndex = mid/cols;
        int colsIndex = mid%cols;

        if(arr[rowsIndex][colsIndex]==target){
            cout<<"found at "<< rowsIndex <<" "<<colsIndex<<" index"<<endl;
            return true;
        }
        else if(arr[rowsIndex][colsIndex]>target){
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
    }
    return false;
}


int main(){

    int arr[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};

    int target = 16;
    int rows = 5;
    int cols = 4;

    bool found = searchTarget(arr,target,rows,cols);
    if(found){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    return 0;
}


//         OUTPUT

// found at 3 3 index
// found