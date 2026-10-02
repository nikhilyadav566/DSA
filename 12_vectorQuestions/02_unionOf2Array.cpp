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
                brr[j] = INT_MIN;        //  here INT_MIN replaced brr[j] elements which are matched to the arr[i] elements
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




//     How does this loop actually works

//  Find duplicates and mark them
    // for(int i=0; i<arr.size(); i++){
    //     for(int j=0; j<brr.size(); j++){
    //         if(arr[i] == brr[j]){
    //             brr[j] = INT_MIN;        
    // }


    // 1. The outer loop selects one elements from  the first array(arr) at a time 

    // 2. For every element selected from arr, the inner loop compares it with every element
    //         of the second array(brr).

    // 3. If arr[i] == brr[j], it means a common element is found.
    
    // 4. After find a match, brr[j] is replaced with INT_MIN. 

    // 5. INT_MIN does not actually skip the element or control the loop.

    // 6. It is only used as a marker to indicate that the matched element has already been used . 

    // 7. When the same position of brr is checked again later, its original value has been replaced
    //     by INT_MIN, so it normally will not match again.

    // 8. The inner loop still visits that index; however, the condition arr[i] == brr[i] becomes false.
    
    // 9. After the inner loop completes all comparisons, the outer loop moves to the next element of arr.