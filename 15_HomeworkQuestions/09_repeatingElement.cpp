// Find first repeating element
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr{1,2,3,4,5,3};


   for(int i=0; i<arr.size(); i++){
    for(int j=i+1; j<arr.size(); j++){
        if(arr[i]==arr[j]){
            cout<<"first repeating element = "<<arr[i]<<endl;
            return 0;  // stops the entire program
            
        }
    }
   }

    return 0;
}


//  output

// first repeating element = 3


//  Note :-> (break) -> Stop the current loop only and continue execution after that loop
//   (return 0) -> Stop the entire main() function, so all loops inside it also stop.