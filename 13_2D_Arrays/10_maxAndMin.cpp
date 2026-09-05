// Find maximum and mininum no in 2D - Array

#include<iostream>
#include<climits>
using namespace std;

int main(){

    int rows;
    cout<<"Enter rows no."<<endl;
    cin>>rows;

    int cols;
    cout<<"Enter cols no."<<endl;
    cin>>cols;

    int arr[rows][cols];

    // input element
    cout<<"Enter elements"<<endl;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }

    //  find max/min and print 

    int max = INT_MIN;
    int min = INT_MAX;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }

    cout<<"Maximum no = "<<max<<endl; 
    cout<<"Minimum no = "<<min<<endl;

    return 0;
}


//  Output

// Enter rows no.
// 3
// Enter cols no.
// 3
// Enter elements
// 1 2 3 4 5 6 7 8 9
// Maximum no = 9
// Minimum no = 1