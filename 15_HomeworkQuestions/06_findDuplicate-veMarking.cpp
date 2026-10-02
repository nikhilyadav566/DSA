// Negative Marking method
// Given an array of n integers where each integer is in the range 1 to n,
//        find the duplicate number.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    
vector<int> arr{1,3,4,2,2};

for(int i=0; i<arr.size(); i++){

    int index = abs(arr[i]);

    //  visited
    if(arr[index]<0){
        cout<<"Duplicate no = "<<index<<endl;
    }
    // not visited
    else{
        arr[index] = -arr[index];
    }
}

    return 0;
}