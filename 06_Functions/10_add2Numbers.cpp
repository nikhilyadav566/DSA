//  Write a function to add 2 numbers, without using Pass value


#include<iostream>
using namespace std;

void addNumber(){
    int a,b,sum;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;

    sum = a+b;
    cout<<"The sum of a and b is "<<sum<<endl;
}

int main(){

    addNumber();  //  function call or invoke here both are same

    return 0;
}


// Enter the value of a
// 4
// Enter the vlaue of b
// 5
// The sum of a and b is 9