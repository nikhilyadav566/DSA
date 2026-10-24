// Find the square root of 25. 
#include<iostream>
using namespace std;

int main(){

    int num = 25;

    int start = 0;
    int end  = 25; 
    // int target = num;  
    int ans = -1;
    int mid;

    while(start<=end){

         mid = start+(end - start)/2;

        if(mid*mid == num){
            cout<<mid<<" is the square root of "<<num<<endl;
            break;
        }
        else if(mid*mid>num){
            // search in left
            end = mid - 1 ;
        }
        else{
            // search in right
            ans = mid ;
            start = mid+1;
        }
    }

    if(mid*mid!=num){
        cout<<ans<<" is the square root of "<<num<<endl;
    }


    return 0;
}

//      output    
//  6 is the square root of 36