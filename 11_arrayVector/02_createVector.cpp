// Create Vector

#include <iostream>
#include <vector>
using namespace std;

int main(){

  // create vector
    vector<int> arr;

    cout<<arr.size()<<endl;     // output -> 0
    cout<<arr.capacity()<<endl;        //  output -> 0

    //  insert
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
   
    // print vector
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;

    //remove / delete
    arr.pop_back();
    arr.pop_back();

    //print
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    //  empty()

    cout<<"Vector arr is Empty or not "<<arr.empty()<<endl;
    //  output is -> 0 means false / Not

    vector<int> drr;
    cout<<"Vectore drr is Empty or not " <<drr.empty()<<endl;
    // output is -> 1 means true



    return 0;
}