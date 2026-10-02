// Find the first occurance of an element at target 4.

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{1,3,4,4,4,4,4,6,7,9};

    int target = 4;
    int start = 0;
    int end = arr.size() - 1;

    int ans = -1;   

    while(start <= end){

        int mid = start + (end - start) / 2;

        if(target == arr[mid]){
            ans = mid;

            // search for first occurrence on left
            end = mid - 1;
        }
        else if(target < arr[mid]){
            // search in left
            end = mid - 1;
        }
        else {
            // search in right
            start = mid + 1;
        }
    }

    cout<<"first occurance is at "<<ans<<endl;

    return 0;
}

// Output
//  ans is 2  (at 2nd index first occurance of target element where is 4)