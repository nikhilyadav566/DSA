// Find the first occurance of an element at target 7 through default function.
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> arr{1,2,3,4,7,7,7,8};

    int target = 7;

    auto ans = upper_bound(arr.begin(),arr.end(),target);
    cout<<"ans is "<<ans-arr.begin()-1<<"th index"<<endl;

    return 0;
}

// Output
// ans is 6th index

// NOTE:
// upper_bound() does not directly return the last occurrence.
// It returns the position one step after the last occurrence.
//
// Therefore:
// ans - arr.begin() - 1
// gives the index of the last occurrence.