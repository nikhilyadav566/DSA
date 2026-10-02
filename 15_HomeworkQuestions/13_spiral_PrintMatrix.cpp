#include<iostream>
#include<vector>

using namespace std;

int main(){
 
    vector<vector<int>> arr{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    int startRow = 0;
    int endRow = arr.size()-1;
    int startCol = 0;
    int endCol = arr[0].size()-1;

    while(startRow <= endRow && startCol <= endCol){

        //  1. Left to Right
        for(int j=startCol; j<=endCol; j++){
            cout<< arr[startRow][j]<<" ";
        }
        startRow++;

            //  2. Top to Buttom
            for(int i=startRow; i<=endRow; i++){
                cout<<arr[i][endCol]<<" ";
            }
            endCol--;

            // 3.Right to left
            if(startRow<=endRow){
                for(int j = endCol; j>=startCol; j--){
                    cout<arr[endRow][j]<<" ";
                }
                endRow--;
            }
            
            // 4. Buttom to Top
            if(startCol <= endCol){
                for(int i = endRow; i>=startRow; i--){
                    cout<<arr[i][startCol]<<" ";
                }
                startCol++;
            }
    }



     
    return 0;
}