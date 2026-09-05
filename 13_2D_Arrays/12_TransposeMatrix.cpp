//  Transpose a matrix

//  Transpose means row becomes column and column becomes row

#include<iostream>
using namespace std;


int main(){

    int rows , cols ;
    rows=3; cols=3;

    int arr[3][3];

    // taking input
    cout<<"Enter input"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }

    //  print Original matrix
    cout<<"Print input"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // create transpose
    int brr[3][3];

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            brr[j][i] = arr[i][j];
        }
    }

    // print transpose
    cout<<"\nTranspose Matrix:"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}

    

// Enter input
// 1 2 3 4 5 6 7 8 9
// Print input
// 1 2 3 
// 4 5 6 
// 7 8 9 

// Transpose Matrix:
// 1 4 7 
// 2 5 8 
// 3 6 9 