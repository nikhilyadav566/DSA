#include<iostream>
#include<vector>
using namespace std;

int main(){

     vector<vector<int>> arr{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};

     int rows = arr.size();
     int cols = arr[0].size();

     int startRow = 0;
     int endRow = rows-1;
     int startCol = 0;
     int endCol = cols-1;

     while(startRow <= endRow && startCol <= endCol){

          // left to right
          for(int i=0; i<=endCol; i++){
               cout<<arr[startRow][i]<<" ";
          }
          startRow++;

          // top to button
          for(int i=startRow; i<=endRow; i++){
               cout<<arr[i][endCol]<<" ";
          }
          endCol--;

          //  right to left
          if(startRow <= endRow){
               for(int i=endCol; i>=startCol; i--){
               cout<<arr[endRow][i]<<" ";
               }
               endRow--;
          }

          // buttom to top

          if(startCol <= endCol){
               for(int i=endRow; i>=startRow; i--){
               cout<<arr[i][startCol]<<" ";
               }
               startCol++;
          }
     }



     

     return 0;
}