// Find repeating by negative marking method But it's use while the range of arr[1 to n].

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{6,4,3,1,3,6};
    
    for(int i=0; i<arr.size(); i++){
        int index = abs(arr[i]);

        if(arr[index-1]<0){
            cout<<"Repeating element = "<<index<<endl;
        }
        else{
            arr[index-1] *= -1;
        }
    }


    return 0;
}

//          OUTPUT 
    //  Repeating element = 3
    //  Repeating element = 6