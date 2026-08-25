//  Print all prime number from 1 to N

#include<iostream>
using namespace std;

int printPrimeNo(int n){

  for(int num=2; num<=n; num++){
        bool isPrime = true;
    for(int i=2; i<num; i++){
        if(num%i==0){
            isPrime = false;
            break;
        }
        
    }
    if(isPrime){
        cout<<num<<" ";
    }
  }  
    

}


int main(){

    int n;
    cout<<"Enter nth no."<<endl;
    cin>>n;

    cout<<printPrimeNo(n);

    return 0;
}