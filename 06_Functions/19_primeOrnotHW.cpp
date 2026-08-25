// Check number is prime or not

#include<iostream>
using namespace std;


void checkPrime(int num){

    for(int i=2; i<num; i++){  
        if (num%i==0){                
            cout<<"Not Prime";
                return;
        }
    }
    cout<<"Prime";
}


int main(){

    int n;
    cout<<"Check, number is prime or not"<<endl;
    cin>>n;


    checkPrime(n);

    return 0;
}

// Note: ->  //   To check whether a number is prime, focus on that number 
//               and check whether it is exactly divisible by any number from 2 up to one less than that number.
 
//     If it is divisible by even one of those numbers -> Not Prime.
//     If it is not divisible by any of them ->  Prime.

// Example1 : suppose to check 7 is prime or not
//         check 2,3,4,5,6
//         7 is not divisible by any of them 
//   -> 7 is prime 

// Example2 : suppose to check 8 is prime or not
//         check 2,3,4,5,6,7
//         8 is divisible by 2, 4
//   -> 8 is Not prime 


// Short memory line:

//  Start from 2
//  Check up num-1
//  one exact divisor -> Not Prime, none -> Prme

