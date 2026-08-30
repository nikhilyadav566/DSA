// Find a triplet that upon additon gives value equal to sum

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{1,2,3,4,2};
    int sum = 9;

    vector<int> ans;


    for(int i=0; i<arr.size(); i++){
            int element1 = arr[i];
        for(int i=1; i<arr.size(); i++){
             int element2 = arr[i];
            for(int i=2; i<arr.size(); i++){
                if(element1+element2+arr[i] == sum){
                    cout<<"Triplet sum = "<<"{"<<element1<<","<<element2<<","<<arr[i]<<"}"<<endl;
                }
            }
        }
    }
    
     return 0;
}

// Output
// Triplet sum = {1,4,4}
// Triplet sum = {2,3,4}
// Triplet sum = {2,4,3}
// Triplet sum = {3,2,4}
// Triplet sum = {3,3,3}
// Triplet sum = {3,4,2}
// Triplet sum = {3,2,4}
// Triplet sum = {4,2,3}
// Triplet sum = {4,3,2}
// Triplet sum = {4,2,3}
// Triplet sum = {2,3,4}
// Triplet sum = {2,4,3}



//  Instead of it we can change the name of variable in each loop like this

// for(int i=0; i<arr.size(); i++){
//             int element1 = arr[i];
//         for(int j=1; j<arr.size(); j++){
//              int element2 = arr[j];
//             for(int k=2; k<arr.size(); k++){
//                 if(element1+element2+arr[k] == sum){
//                     cout<<"Triplet sum = "<<"{"<<element1<<","<<element2<<","<<arr[k]<<"}"<<endl;
//                 }
//             }
//         }
//     }