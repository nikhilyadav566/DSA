//  Wave Print matrix a number it's also called column-wise printing

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> arr{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    for(int j=0; j<arr.size(); j++){
        if(j%2==0){
            // Top to Buttom
            for(int i=0; i<arr.size(); i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            // Buttom to Top
            for(int i=arr.size()-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }


    return 0;
}