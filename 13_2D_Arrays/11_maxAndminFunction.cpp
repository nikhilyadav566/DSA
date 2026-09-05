// Find max and min in 2D-Array through function

#include<iostream>
#include<climits>
using namespace std;

int findMaxMin(int arr[][3], int rows, int cols){
    int max = INT_MIN;
    int min = INT_MAX;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]>max){
               max = arr[i][j];
            }
            if(arr[i][j]<min){
                min = arr[i][j];
            }           
        }
    }
    cout<<"Maximum = "<<max<<endl;
    cout<<"Mininum = "<<min;
}




int main(){

    int rows, cols;

    rows = 3;
    cols = 3;

    int arr[3][3];

    // input elements 
    cout<<"Enter elements"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }

    findMaxMin(arr, rows, cols);
    


    return 0;
}

//   Output
// Enter elements
// 1 2 3 4 5 6 7 89 21
// Maximum = 89
// Mininum = 1