// Find common elements in sorted Array
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{10,20,30,40,50};
    vector<int> brr{20,30,40,60,70};
    vector<int> crr{20,40,80,90,100};

    int i=0,j=0,k=0;

    cout<<"Common elements "<<endl;
    while(i<arr.size() && j<brr.size() && k<crr.size()){
        if(arr[i]==brr[j] && brr[j]==crr[k]){
            cout<<arr[i]<<" ";
            i++;
            j++;
            k++;
        }

        //  move the smallest element
        else if(arr[i]<brr[j]){
            i++;
        }
        else if(brr[j]<crr[k]){
            j++;
        }
        else{
            k++;
        }
    }


    return 0;
}


// Common elements 
// 20 40