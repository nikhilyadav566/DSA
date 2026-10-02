// Given an array nums containing 0, 1, and 2, sort the array in-place so 
// that objects of the same color are adjacent, with the order 0, 1, 2.

#include<iostream>
#include<vector>
#include <functional>

using namespace std;

int main(){

int n;
cout<<"Enter size"<<endl;
cin>>n;  


vector<int> num(n);

// input element
cout<<"Enter element"<<endl;
for(int i=0; i<num.size(); i++){
    cin>>num[i];
}

int start =0;
int end = num.size() - 1;
int  k=0;

while(k<=end){
    if(num[k]==0){
        swap(num[start],num[k]);
        start++;
        k++;
    }
    else if(num[k] == 1){
        k++;
    }
    else{
        swap(num[end], num[k]);
        end--;
    }
}

cout<<"Sorted element"<<endl;
for(auto value : num){
    cout<< value<<" ";
}


    return 0;
}


//  Output
// Enter size
// 6
// Enter element
// 0 1 2 0 1 0 
// Sorted element
// 0 0 0 1 1 2 