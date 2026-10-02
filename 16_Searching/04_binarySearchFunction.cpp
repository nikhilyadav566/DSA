//  There is a default(in-built) binary search funcion which is used to directly to find element is found or not.
//    binary_search(base Address, last Address, target)
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> arr{1,2,3,4,5};

    int target;
    cout<<"Enter target in Vector"<<endl;
    cin>>target;

    if(binary_search(arr.begin(),arr.end(),target)){      // binary_search(arr.begin(),arr.end(),target) it's a binary default function 
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
 

    //    In Array

    int brr[]={1,2,3,4,5};

    int size = 5;

    int n;
    cout<<"Enter target in Array"<<endl;
    cin>>n;

    if(binary_search(brr, brr+size, n)){     // binary_search(brr, brr+size, n) 
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    return 0;
}


// Enter target in Vector
// 3
// found
// Enter target in Array
// 6
// not found