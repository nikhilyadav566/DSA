//  Sum of Even no. upto N

#include<iostream>
using namespace std;

int sumEven(int n){
    int sum=0;
    for(int i=2; i<=n; i+=2){
        sum = sum+i;
    }
         return sum;
}


int main(){


   int n;
   cout<<"Enter nth no."<<endl;
   cin>>n;
   
   cout<<"The sum of even no is "<<sumEven(n)<<endl;

   return 0;
} 