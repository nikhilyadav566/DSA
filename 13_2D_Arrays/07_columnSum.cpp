//    Column - Wise - Sum

#include<iostream>
using namespace std;

int main(){

    int rows;
    cout<<"Enter rows"<<endl;
    cin>>rows;

    int cols;
    cout<<"Enter cols"<<endl;
    cin>>cols;

    int arr[rows][cols];

    //  column wise input 

    cout<<"Enter elments "<<endl;

    for(int j=0; j<cols; j++){                     
        for(int i=0; i<rows; i++){
            cin>>arr[i][j];                  //  Taking input in column wise                   
        }
    }


    //   print column-wise-sum

    for(int i=0; i<rows; i++){
        int sum =0;
        for(int j=0; j<cols; j++){
            sum = sum+arr[i][j];
        }
        cout<<"Column-sum = "<<sum<<endl;
    }



    return 0;
}



//        OUTPUT

// Enter rows
// 3
// Enter cols
// 3
// Enter elments 
// 1 2 3 4 5 6 7 8 9
// Column-sum = 12
// Column-sum = 15
// Column-sum = 18


//   NOTE : => similary we can print column-wise-sum through function like as row-wise-sum through function.