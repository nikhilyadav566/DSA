// Find a pair that upon additon gives value equal to sum from two array

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{1,2,3,4,5};
    vector<int> brr{8,3,5,4,2};

    int sum = 8;

    vector<int> ans;

    for(int i=0; i<arr.size(); i++){
        int element = arr[i];

        for(int j=0; j<brr.size(); j++){
            if(element+brr[j] == sum){
                cout<<"Pair Sum = "<<"{"<<element<<","<<brr[j]<<"}"<<endl;
            }
        }
    }


    return 0;
}


// Output

// Pair Sum = {3,5}
// Pair Sum = {4,4}
// Pair Sum = {5,3}