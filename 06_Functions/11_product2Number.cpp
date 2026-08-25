//  Write a function to product of 2 numbers by pass value.

#include<iostream>
using namespace std;

int productNumber( int a , int b){
    int product = a*b;
    return product;
}

int main(){

    int a,b;
    cout<<"Enter first no."<<endl;
    cin>>a;
    cout<<"Enter second no."<<endl;
    cin>>b;

    int multiplication = productNumber(a,b);
    cout<<"The product of given no. is "<<multiplication<<endl;

    return 0;
}

// Note:->  While we invoke or call any function then that function declaration would be above from the function