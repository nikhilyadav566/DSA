// Find and print all duplicate elements in an array, but print each duplicate only once, 
//      even if it occurs 3 or more times.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

int n;
cout<<"enter size of element"<<endl;
cin>>n;

vector<int>arr(n);

//  input element
cout<<"enter elements"<<endl;
for(int i=0; i<arr.size(); i++){
    cin>>arr[i];
}

// Sort the array so that duplicate elements come together
sort(arr.begin(), arr.end());      

for(int i=0; i<arr.size()-1; i++){
    if(arr[i]==arr[i+1] && (i==0 || arr[i]!=arr[i-1])){           //   arr[i+1]-> next elememt from current element, arr[i-1] 
       cout<<"Duplicate no = "<<arr[i]<<endl;
    }
}

    return 0;
}

// enter size of element
// 9
// enter elements
// 0 1 2 3 0 3 2 0 3  
// Duplicate no = 0
// Duplicate no = 2
// Duplicate no = 3



// How does it work

/*
LOGIC:

1. Sort the array so that duplicate elements come together.

2. Compare the current element arr[i] with the next element arr[i+1].
   If they are equal, a duplicate is found.

3. Check i == 0 because the first element has no previous element.
   This prevents accessing arr[-1].

4. Check arr[i] != arr[i-1] so that a duplicate number
   is printed only once, even if it occurs 3 or more times.
*/



//  Note :-> If the current number is equal to the next number 
//     AND this is the first element OR the current number is different from the previous number, 
//               then print it

