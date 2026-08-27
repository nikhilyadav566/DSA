//  Array -> effectively passed by reference

//  When you pass an array to a function, the function can modify the original array.

#include<iostream>
using namespace std;

void change(int arr[]){
    arr[0] = 100;
    cout<<arr[0]<<endl;
}

int main(){

    int arr[3] = {2,3,5};

    change(arr);

    cout<< arr[0];

}

//  Output
//  100
//  100

//  After calling change() from main()
//   it goes to change(int arr[]) 
//    and inside it we change the element of 0th index
//      which is equal 100
//        And in change() ->cout->0th index element then output will be 100 but 
//   it will be also same while it will called from main function.

//    Now if we cout from main()
//        then its output will be 100

