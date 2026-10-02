// Sort an array containing only 0s and 1s without using any sorting function.

#include<iostream>
#include<vector>
#include <algorithm>      // sort

using namespace std;

int main(){

    int n ;
    cout<<"Enter size"<<endl;
    cin>>n;

    vector<int> arr(n);

    // input element
    cout<<"Enter elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    //  print 
    
    cout<<"Sorted elements  "<<endl;
    for(auto value : arr){
        cout<<value<<" ";
    }

    return 0;
}


// Enter size
// 6
// Enter elements
// 6 5 2 1 4 3
// Sorted elements
// 1 2 3 4 5 6 