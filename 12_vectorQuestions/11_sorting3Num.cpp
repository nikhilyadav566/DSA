// Sorting 3 Numbers

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr{1,1,2,3,2,3,3,1,2,3,1};

    int start=0;
    int end=arr.size()-1;
    int i =0;

    while(i<=end){
        if(arr[i]==1){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        else if(arr[i]==2){
              i++;
        }
        else{
            swap(arr[end], arr[i]);
            end--;
        }
    }

    // print
    for(auto value: arr){
        cout<<value<<" ";
    }
    cout<<endl;

    return 0;
}

// Output
// 1 1 1 1 2 2 2 3 3 3 3 