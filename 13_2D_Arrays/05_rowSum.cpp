// Find row Sum of given arrays

#include<iostream>
using namespace std; 

int main(){

    int a;
    cout<<"Enter no. of rows "<<endl;     //  input no. of row 
    cin>>a;

    int b; 
    cout<<"Enter no. of columns"<<endl;      // input no. of col
    cin>>b;

    int arr[a][b];                                //  declare 2D array

    cout<<"Enter row elements"<<endl;                       //  input (axb)no. of elements 
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>>arr[i][j];
        }
    }

    // printing row sum


    for(int i=0; i<a; i++){
        int sum =0;                               //intialise sum and assign sum =0;
        for(int j=0; j<b; j++){
             cout<<arr[i][j]<<" ";
            // sum = sum+arr[i][j];                     
           
        }
        cout<<endl;
        // cout<<"Row sum = "<<sum<<endl;            //     print sum
    }



    return 0;
}


// Output 

// Enter no. of rows 
// 3
// Enter no. of columns
// 3
// Enter row elements
// 1 2 3 4 5 6 7 8                                  //   visual it like this 
// Row sum = 6                  ->                          1 2 3
// Row sum = 15                 ->                          4 5 6
// Row sum = 24                 ->                          7 8 9