// Find a pair that upon additon gives value equal to sum


#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{10,20,30,40,50};
    int sum = 70;

    for(int i=0; i<arr.size(); i++){
        int element = arr[i];

        for(int i=1; i<arr.size(); i++){
            if(element+arr[i] ==  sum){
                cout<<"Pair Found = "<<"{"<<element<<","<<arr[i]<<"}"<<endl;
            }
        }
    }



    return 0;
}


// Output

// Pair Found = {20,50}
// Pair Found = {30,40}
// Pair Found = {40,30}
// Pair Found = {50,20}