//  Find missing element by the using of sorting

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> arr{1,3,4,4,2};   // 1 2 3 4 4

    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size(); i++){
        // sort(arr.begin(), arr.end());

        if(arr[i]!=i+1){
            cout<<i+1<<" ";
        }

    }
    


    return 0;
}