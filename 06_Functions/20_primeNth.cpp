// By using of bool datatype find upto nth prime no.

#include<iostream>
using namespace std;

bool checkPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}



int main(){

    int n;
    cout<<"Enter nth no."<<endl;
    cin>>n;

   for(int i=2; i<=n; i++){
    bool isPrime = checkPrime(i);
    if(isPrime){
        cout<<i<<" ";
    }
   }
}