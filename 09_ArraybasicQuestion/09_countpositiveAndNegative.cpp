//  Take n elements and count the positive and negative elements separately.

#include<iostream>
using namespace std;

int main(){

    int arr[10];

    int n;
    cout<<"Enter size of elements"<<endl;
    cin>>n;

    cout<<"Enter elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int positive = 0;
    int negative = 0;

    for(int i=0; i<n; i++){
        if(arr[i]>0){
            positive++;
        }
        else{
            negative++;
        }
    }
    cout<<"Positive = "<<positive<<endl;
    cout<<"Negative = "<<negative<<endl;


    return 0;
}

// Enter size of elements
// 4 
// Enter elements
// 4 -6 8 -2
// Positive = 2
// Negative = 2