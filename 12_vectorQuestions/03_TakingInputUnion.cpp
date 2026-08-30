// Taking input elements and make it Union of 2 arrays

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){

//   Case.1


int num1;
cout<<"Enter size of 1st array"<<endl;
cin>>num1;

vector<int> arr(num1);



vector<int>ans;

//  Take first array input and push into ans

cout<<"Enter elements"<<endl;
for(int i=0; i<arr.size(); i++){
    cin>>arr[i];
    ans.push_back(arr[i]);
}

//     Case 2.



int num2;
cout<<"Enter size of 2nd array"<<endl;
cin>>num2;

vector<int> brr(num2);


// Take second array input 

cout<<"Enter elements "<<endl;
for(int i=0; i<brr.size(); i++){
    cin>>brr[i];
}

// Mark the duplicate 
for(int i=0; i<arr.size(); i++){
    for(int j=0; j<brr.size(); j++){
        if(arr[i] == brr[j]){
            brr[j] = INT_MIN;  
            break;
        }
    }
}

//   Add only unmarked elements form second array
for(int i=0; i<brr.size(); i++){
    if(brr[i] != INT_MIN){
        ans.push_back(brr[i]);
    }
}


//   Print array<<

cout<<"Union of 2 Array = ";
for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
}
cout<<endl;



    return 0;
}


// Enter size of 1st array
// 3
// Enter elements
// 1 2 3
// Enter size of 2nd array
// 5
// Enter elements 
// 1 2 3 4 5
// Union of 2 Array = 1 2 3 4 5 