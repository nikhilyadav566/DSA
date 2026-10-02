// Row-wise Wave printing
#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<vector<int>> arr{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    cout<<"Column-Wise wave print "<<endl;
    for(int i=0; i<arr.size(); i++){
        if(i%2==0){
            //  Left to right side
            for(int j=0; j<arr.size(); j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            // Right to left side
            for(int j=arr.size()-1; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }


    return 0;
}



// Column-Wise wave print 
// 1 2 3 4 8 7 6 5 9 10 11 12 16 15 14 13 