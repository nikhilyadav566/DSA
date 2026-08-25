// Counting from 1 to N

#include<iostream>
using namespace std;

void countNumber(int num){


    for(int i = 1; i<=num; i++){
         cout<<i<<" ";
    }
       cout<<endl;
}


int main(){

    int n;
    cout<<"Enter nth no."<<endl;
    cin>>n;

    countNumber(n);
    

    return 0; 
}