//  Another way

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void increment(int arr[], int size){
    arr[0] = 50;

    printArray(arr, size);
}


int main(){

    int arr[] = {5,6};
    int size = 2;
    increment(arr, size);

    printArray(arr, size);

    cout<<arr[0]<<endl;
}


// Output

// 50 6 
// 50 6
// 50



//  Compiler starts execute code from main()
//  where arr[] and size are initalized
//   after it will call increment function
//   And in increment() there would be change the element of 
//     0th index which becomes 50
//      and after in increment() there is printArray() then call it .

//     And now in printArray() there is for loop which run less than given size and 
//       cout 0th index value 
//      Which becomes 
//                    50 6
//                    50 6

//     And There is also cout from 0th index element from main() then output will be 
//          50 



// Note :-> While pass function in Array then it will be always 'Pass by refrence'

//    there would not be copy created 


       