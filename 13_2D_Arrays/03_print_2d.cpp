//  How to print in 2d arrays

#include<iostream>
using namespace std; 

int main(){

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    cout<<arr[2][2]<<endl;    // Output -> 9

    //  row-wise print
    // outer Loop
    for(int i=0; i<3; i++){
        //  for every row, we need to print value in each column
        for(int j=0; j<3; j++){                      //   output 
            cout<<arr[i][j]<<" ";                    //   1 2 3     
        }                                            //   4 5 6  
        cout<<endl;                                  //   7 8 9
    }


    //  column-wise print
    cout<<"printing Column wise"<< endl ;   

    for(int i=0; i<3; i++){           // It's may be wrong ocassioanly
        for(int j=0; j<3; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    //  OUTPUT

//     printing Column wise
//            1 4 7 
//            2 5 8 
//            3 6 9


//   Note ->  we should print column-wise like this it's valid and right way

cout<<"Printing column-wise in another way"<<endl;

for(int j=0; j<3; j++){
    for(int i=0; i<3; i++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
//         OUTUPT

//            1 4 7 
//            2 5 8 
//            3 6 9

    

    return 0;
}