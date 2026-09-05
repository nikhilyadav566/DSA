//   linear search element in matrix Or (2D Array)

#include<iostream>
using namespace std;

int main(){

    int rows;
    cout<<"Enter rows no."<<endl;
    cin>>rows;

    int cols;
    cout<<"Enter columns no."<<endl;
    cin>>cols;

    int arr[rows][cols];

    // input elements
    cout<<"Enter elements"<<endl;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }

    int key;
    cout<<"Which no. do you want to find"<<endl;
    cin>>key;

    bool found = false;              //   means element is assumed not found

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] == key){       // when condition becomes true
                found = true;                //  we change in (found = true)
            }
        }
    }

    if(found){                             //  it means (found == true)  because if prints only true condition statement  .
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Not present"<<endl;        //  otherwise print false statement
    }


    return 0;
}


//  Output

// Enter rows no.
// 3
// Enter columns no.
// 3
// Enter elements
// 1 2 3 4 5 6 7 8 9
// Which no. do you want to find
// 5
// Element Found