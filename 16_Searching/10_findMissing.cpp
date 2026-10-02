//  find missing element 
#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr{ 1,2,3,5,6,7,8};

    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == i+1){
            continue;        
        }                                  //    but it's not solved by binary no , So see in next file
        else{
            cout<<"Missing element = "<<i+1<<endl;
            break;
        }
    }


    return 0;
}

//    Output

//   Missing element = 4