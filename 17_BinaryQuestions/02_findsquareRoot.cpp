// find the square root .(only integer form)

#include<iostream>
using namespace std;

int findSqrt(int n){
    int start = 0 ;
    int end = n;
    int target = n;
    int ans =  -1;

    while(start<=end){
        int mid = start+(end-start)/2;
        if(mid*mid==target){
            return mid;
        }
        else if(mid*mid>target){
            //   left search 
                end = mid - 1 ;
        }
        else{
            // store mid;
            ans = mid;
            // search in right
            start = mid + 1;

        }
    }
    return ans;
}


int main(){

    int n ;
    cout<<"Enter number to find it's square root"<<endl;
    cin>>n;

    int ans = findSqrt(n);
    cout<<"ans is "<<ans<<endl;

    return 0;
}
    

         // OUTPUT

// Enter number to find it's square root
// 5
// ans is 2