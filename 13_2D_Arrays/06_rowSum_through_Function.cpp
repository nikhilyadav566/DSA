//   row-Wise-sum through function

#include<iostream>
using namespace std;


void printRowWiseSum( int arr[][3] , int rows , int cols){      //  there is need to fill all square bracket except front 
     for(int i=0; i<rows; i++){
        int sum = 0;
        for(int j=0; j<cols; j++){
            sum = sum+arr[i][j];
        }
            cout<<"Row Sum = "<<sum<<endl;
     }
}




int main(){

    int arr[3][3];
    int rows = 3;
    int cols = 3;


    //    input row wise elements

    cout<<"Enter elements"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
    
        }
    }    
        printRowWiseSum(arr, rows, cols);
    return 0;
}


//    Output

// Enter elements
// 1 2 3 4 5 6 7 8 9
// Row Sum = 6
// Row Sum = 15
// Row Sum = 24