// Access elements by the using of index no.

#include<iostream>
using namespace std;

int main(){

    int arr[] = {10,20,30,40,50};
    
         cout<<arr[0]<<endl;  // 10
         cout<<arr[3]<<endl;    // 40
         cout<<arr[4]<<endl;    // 50

        // Now want to print all values

        for(int index=0; index<5; index++){
            cout<<arr[index]<<endl;
        }

        // Output
        // 10
        // 20
        // 30
        // 40
        // 50

         return 0;
}