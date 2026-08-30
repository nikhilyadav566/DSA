// Union of 2 arrays

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){

    vector<int>arr{1,2,3,4,5};
    vector<int>brr{1,2,3,4,5,6,7,8,9,10};

    vector<int> ans;         //  create vector

    // push all element of vector arr
    for(int i=0; i<arr.size(); i++){
        ans.push_back(arr[i]);
    }

    //  Find duplicates and mark them
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<brr.size(); j++){
            if(arr[i] == brr[j]){
                brr[j] = INT_MIN;        //skip
                break;
            }
        }
    }

    //  push remaining unique elements of brr
    for(int i=0; i<brr.size(); i++){
        if(brr[i] != INT_MIN){
            ans.push_back(brr[i]);
        }
    }




    //   print ans
    cout<<"Union of Two array = ";  
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


    // Union of Two array = 1 2 3 4 5 6 7 8 9 10  


    return 0;
}


//  How does it work 

// Step1:-> Copy first array completely 
// Step2:-> Find duplicates in second array
// Step3:-> Mark duplicates as INT_MIN
// Step4:-> Add only unmarked elements form second array


