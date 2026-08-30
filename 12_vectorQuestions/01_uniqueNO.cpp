// Find Unique element

// Given an array of integers in which every element appears exactly twice except for one element that appears only oncce, 
 //  find that unique element 

#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr){     
    int ans = 0;

    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];     // use XOR 
    }
      return ans;
}




int main(){

    // input size of element
    int n;
    cout<<"Enter size number"<<endl;
    cin>>n;                         

    vector<int> arr(n);  //  create 'n' no. of vector

    // Taking input element 
    cout<<"Enter your elements"<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];                   
    }

    int uniqueElement = findUnique(arr);   //  call findUnique() function

    cout<<"Unique Element is "<<uniqueElement<<endl;


    return 0;
}


// Output

// Enter size number
// 9
// Enter your elements
// 1 2 3 4 5 4 5 1 2
// Unique Element is 3