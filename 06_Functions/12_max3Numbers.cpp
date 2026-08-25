// Find max of 3 numbers

#include<iostream>
using namespace std;


int maxNumber(int num1, int num2, int num3){

    if(num1>num2&&num1>num3){
        return num1;
    }
    else if(num2>num1&&num2>3){
        return num2;
    }
    else{
        return num3;
    }

}




int main(){

    int a,b,c;
    cout<<"Enter 1st no."<<endl;
    cin>>a;

    cout<<"Enter 2nd no."<<endl;
    cin>>b;

    cout<<"Enter 3rd no."<<endl;
    cin>>c;

    int number = maxNumber(a,b,c);

    cout<<number<<" is maximum number"<<endl;

    return 0;
}


// output

// Enter 1st no.
// 5
// Enter 2nd no.
// 5
// Enter 3rd no.
// 9
// 9 is maximum number