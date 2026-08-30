// Intersection of 2 Array

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){


    vector<int>arr{2,3,4,5,6};
    vector<int>brr{7,8,3,6,9};

    vector<int>ans;

    for(int i=0; i<arr.size(); i++){
        int element = arr[i];
        for(int j=0; j<brr.size(); j++){
            if(element==brr[j]){
                brr[j] = INT_MIN;
            ans.push_back(element);
                break;
            }
        }
    }

    // print

    cout<<"Intersection of 2 Array are ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


    return 0;
}

// Intersection of 2 Array are 3 6 