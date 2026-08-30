//   Ways to create vector
// { There are variout ways to create vector

#include<iostream>
#include<vector>
using namespace std;

int main(){

    // 1. Way
    vector<int> arr;

    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // output
    // 6 7 8

    // 2nd Way
    vector<int> brr(10);
    cout<<"Size of brr "<<brr.size()<<endl;
    cout<<"Capacity of brr "<<brr.size()<<endl;

    for(int i=0; i<brr.size(); i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;

    // Output

    // Size of brr 10
    // Capacity of b 10
    // 0 0 0 0 0 0 0 0 0 0 




    //  Now we can replace and use any number like as 

    vector<int> crr(10, -1);

    for(int i=0; i<crr.size(); i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    
    //  Output
    // -1 -1 -1 -1 -1 -1 -1 -1 -1 -1



    //   OR we can like this 
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    vector<int> drr(n, 5);
    for(int i=0; i<drr.size(); i++){
        cout<<drr[i]<<" ";
    }
    cout<<endl;

     

    //   Output

    // Enter the value of n
    // -8
    // -8 -8 -8 -8 -8 
    
    


    //   Also through this way create vector

    vector<int>err{10,20,30,40,50};
    for(int i=0; i<err.size(); i++){
        cout<<err[i]<<" ";
    }
    cout<<endl;

    // Output
    // 10 20 30 40 50

    return 0;
}
