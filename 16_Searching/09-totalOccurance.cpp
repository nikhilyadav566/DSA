// Total no. of occurance of given target value
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> arr{ 1,2,3,3,3,3,4};

    int start = 0;
    int end = arr.size()-1;
    int target = 3;

    auto firstOccurance = lower_bound(arr.begin(), arr.end(), target);
    auto lastOccurance  = upper_bound(arr.begin(), arr.end(), target);

    int totalOccurance  =  (lastOccurance - firstOccurance);
    cout<<"totalOccurance = "<<totalOccurance<<endl;
    




    return 0;
}


//    OUTPUT 
// totalOccurance = 4

// lower_bound → first occurrence
// upper_bound → position after last occurrence

// total occurrences = upper_bound - lower_bound