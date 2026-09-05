// Transpose Matrix through matrix

#include<iostream>
using namespace std;

//    create transpose
void createTranspose(int arr[][3], int rows, int cols, int transpose[][3]){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            transpose[j][i] = arr[i][j];
        }
    }
}



//      print matrix
void printMatrix(int arr[][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int rows , cols;
    rows=3; 
    cols=3;

   int  arr[3][3];

    //  input element
    cout<<"Enter elements"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }


    int transpose[3][3];

    // print original matrix
    cout<<"Print original matrix"<<endl;
    printMatrix(arr, rows, cols);

    // create transpose matrix
    cout<<"Starting transpose"<<endl;
    createTranspose(arr, rows, cols, transpose);

    // create print matrix Ouptput again
    cout<<"Print matrix output"<<endl;
    printMatrix(transpose, rows, cols);


    return 0;
}


//  OUTPUT

// Enter elements
// 1 2 3 4 5 6 7 8 9
// Print original matrix
// 1 2 3 
// 4 5 6 
// 7 8 9 
// Starting transpose
// Print matrix output
// 1 4 7 
// 2 5 8 
// 3 6 9 