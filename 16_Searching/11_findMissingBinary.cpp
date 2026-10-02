//  Find the missing element by the using of binary Search 
#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr{1,2,3,5,6,7,8,10};

    int start = 0 ; 
    int end = arr.size()-1;

    while(start<=end){

        int mid = start+(end-start)/2;\

        if(arr[mid]==mid+1){
            //  left side is correct
            start = mid + 1;
        }
        else{
                // Missing element is on left side
                end = mid - 1 ;
        }
    }

    cout<<"Missing Element  = "<<start + 1<<endl;

    return 0;
}




//   OUTPUT

// Missing Element  = 4


//   How does it work 


        /*
            Array:
            Index:  0  1  2  3  4  5  6  7
            Value:  1  2  3  5  6  7  8  10


            1st iteration:

            start = 0
            end = 7

            mid = 0 + (7 - 0) / 2
                = 3

            arr[mid] = arr[3] = 5

            mid + 1 = 4

            Check:
            arr[mid] == mid + 1
            5 == 4  → FALSE

            This means a number is missing before index 3.

            Therefore, move to the LEFT:

            end = mid - 1
                = 3 - 1
                = 2
        */