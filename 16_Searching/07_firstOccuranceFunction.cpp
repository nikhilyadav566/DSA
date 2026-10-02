//  To find first occurance through is a inbuilt defalut function
// lower_bound(arr.begin(),arr.end(),target)

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> arr{1,2,3,4,5,6,6,6,6,6,6,6,7,8};

    int target = 6;

    auto ans = lower_bound(arr.begin(), arr.end(),target);
        cout<<" ans is "<<ans-arr.begin()<<"th index"<<endl;
    

    return 0 ;
}

// output
// ans is 5th index