//   Search element in matrix OR (2D Array) through function

#include<iostream>
using namespace std; 

 bool findElement(int arr[][3], int key, int rows, int cols ){
                for(int i=0; i<rows; i++){
                    for(int j=0; j<cols; j++){
                        if(arr[i][j] == key){
                           return true;
                        }
                    }
                }
                // value is not present
                return false;
}



int main(){

    int arr[3][3];

    int rows = 3;
    int cols = 3;

    cout<<"Enter elements"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }

    int key;
    cout<<"Which element do you want to find"<<endl;
    cin>>key;


    bool found = findElement(arr, key, rows, cols);
            if(found){
                cout<<"present"<<endl;
            }
            else{
                cout<<"not available"<<endl;
            }


    return 0;
}

//   Output
// Enter elements
// 1 2 3 4 5 6 7 8 9
// Which element do you want to find
// 3
// present

