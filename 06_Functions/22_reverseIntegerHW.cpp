// Reverse an Integer

#include<iostream>
using namespace std;


int reverseInteger(int n){
int rem=0, ans=0;

while(n>0){
    int digit = n%10;
    ans=ans*10+digit;
    n=n/10;
}
    return ans;


}


int main(){


    int n;
    cout<<"Enter integer no"<<endl;
    cin>>n;

    cout<<reverseInteger(n);

    return 0;
}