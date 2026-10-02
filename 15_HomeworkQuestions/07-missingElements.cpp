#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{1,3,5,3,4};


    //  visited method
    for(int i=0; i<arr.size(); i++){
        
        int index = abs(arr[i]);

        if(arr[index-1]>0){
            arr[index-1] *= -1;
        }    
    }

    //    it's not needed only for understanding
    cout<<"See positive indexes to find missing after visited"<<endl;
    for(auto value : arr){
        cout<<value<<" ";
    }
    cout<<endl;


    //  all positive indexes are missing
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>0){
            cout<<"Missing element = "<<i+1<<" ";
        }
    }




    return 0;
}


// See positive indexes to find missign after visited
// -1 3 -5 -3 -4 
// Missing element = 2