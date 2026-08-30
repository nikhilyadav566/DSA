// sort 1's , 2's and 3 

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr{1,2,1,2,2,1,1,1};
    
    int start=0;
    int end = arr.size()-1;
    int i = 0;

    while(i<end){

        if(arr[i]==1){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        if(arr[i]==2){
            swap(arr[end],arr[i]);
            end--;
        }
    }

    // for(auto valu: arr){
    //     cout<<arr;
    // }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}