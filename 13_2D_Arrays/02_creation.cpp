//  Creation of 2D array

#include<iostream>
using namespace std;

int main(){

    // declare 2D array
    int arr[3][3];

    // initialisation

    int brr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
        

    // for(auto value: brr){
    //     cout<<value<<" ";
    // }

   
    return 0;
}


//       int brr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};


//   Visualise it like this 

//            Column
//          0   1   2
//        ┌───┬───┬───┐
// Row 0  │ 1 │ 2 │ 3 │
//        ├───┼───┼───┤
// Row 1  │ 4 │ 5 │ 6 │
//        ├───┼───┼───┤
// Row 2  │ 7 │ 8 │ 9 │
//        └───┴───┴───┘


//   But in memory it sotored like linear contiguous way

//                        Memory

// Index     0    1    2    3    4    5    6    7    8
//         ┌────┬────┬────┬────┬────┌────┬────┬────┬────┬
// Value   │ 1  │ 2  │ 3  │ 4  │ 5  │ 6  │ 7  │ 8  │ 9  │ 
//         └────┴────┴────┴────┴────└────┴────┴────┴────┴
                              
// Find the linear position of brr[2][1]

// Formula:
// (C × i) + j

// C = number of columns = 3
// i = row = 2
// j = column = 1

// (3 × 2) + 1
// = 7

// So brr[2][1] is at linear offset/index 7
// Value = 8