//  Wave Print matrix a number it's also called column-wise printing

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> arr{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    int rows = arr.size();
    int cols = arr[0].size();

    for(int j=0; j<rows; j++){
        if(j%2==0){
            // Top to Buttom
            for(int i=0; i<cols; i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            // Buttom to Top
            for(int i=rows-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }


    return 0;
}

//       Output
// 1 5 9 13 14 10 6 2 3 7 11 15 16 12 8 4 