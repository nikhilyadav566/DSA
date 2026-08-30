//   Take n elements in an array and find the smallest element.

#include<iostream>
using namespace std;

int main(){

    int arr[10];

    int n;
    cout<<"How many numbers do you want to input: "<<endl;
    cin>>n;

    cout<<"Enter elements: "<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];  // 1 2 3 4
    }

    int min = arr[0];          //  here min = 1

    for(int i=1; i<n; i++){
        if(arr[i]<min){                    // here condition is false(2<1)        
          min = arr[i];                    //  therefore, min = arr[i] does not execute at all 
                                             // So min remains: min = 1 
        }
    }                           //  Note : -> As we know that if the codition is true -> execute the code inside if
                               //            If the condition is false -> skip / ignore the code inside if

    cout<<"Minimum: "<<min<<endl;     //  here print min


    return 0;
}