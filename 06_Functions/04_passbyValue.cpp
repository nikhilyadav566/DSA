// Pass by value
//  The function receives a copy.

#include<iostream>
using namespace std;

 int getSum(int a, int  b){
     int sum;
     a = 80;
     b = 90;

     sum = a+b;

    return sum;
}

int main(){

    int a = 5;
    int b = 6;

    int sum = a+b;

    getSum(a,b);

    cout<<sum<<endl;     // 11

    cout<<"Sum = "<<getSum(a,b)<<endl;   // 170

    cout<<sum<<endl;       // 11

    return  0;
}


//   Output
//    11
//   Sum = 170
//    11



//  Note:->     The function changed x, but a in main() did not change .

//     Value -> copy -> original usually does NOT change.