// Take n elements in an array and find their sum.

#include<iostream>
using namespace std;

int main(){

    int arr[10];

    int n;
    cout<<"Enter size of element less than 10"<<endl;
    cin>>n;

    cout<<"Enter elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum = 0;

    for(int i=0; i<n; i++){
        sum = sum+arr[i];
    }
        cout<<"Sum: "<<sum;



        return 0;
      
}

// Enter size of element
// 5
// Enter elements
// 1 2 3 4 5
// Sum: 15