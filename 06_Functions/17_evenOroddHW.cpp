// Find number is Even or Odd

#include<iostream>
using namespace std;

void getEvenOdd(int n){
    if(n%2==0){
        cout<<"even number"<<endl;
    }
    else{
        cout<<"odd number"<<endl;
    }
}



int main(){

    int n ; 
    cout<<"Enter number"<<endl;
    cin>>n;

    getEvenOdd(n);

    return 0;
}