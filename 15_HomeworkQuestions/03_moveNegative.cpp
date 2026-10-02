//  Move all -ve numbers to left side of an array.

// Note:-> Assumption order mentainance not required

//  This algorithm is called Dutch National Flag / (2-Pointer Approach)

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

int n;
cout<<"Enter size"<<endl;
cin>>n;

vector<int> arr(n);

// input

cout<<"Enter elements"<<endl;
for(int i=0; i<arr.size(); i++){
    cin>>arr[i];
}

int start = 0;
int end = arr.size()-1;

while(start < end){
    if(arr[start] < 0){
        start++;
    }
    else if(arr[end] > 0){
        end--;
    }
    else{
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    
}

cout<<"Move -ve numbers in left side "<<endl;
for(auto value : arr){
    cout<<value<<" ";
}

//  By sorting function 

//  I can also solve like this but not good practice above solution is right 
 
// vector<int> brr = {1,-4,2,0,-7,-5};

// sort(brr.begin(), brr.end());      

// for(auto value : brr){    // Output :-> -7 -5 -4 0 1 2
//     cout<<value<<" ";
// }

    return 0;
}


// Enter size
// 6
// Enter elements
// 1 0 2 -4 -6 8 
// Move -ve numbers in left side 
// -6 -4 2 0 1 8 