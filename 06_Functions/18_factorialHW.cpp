// Find factorial of a number

#include<iostream>
using namespace std;

long long  getFactorial(int n){                  //  use long long instead of int which has maximum bits because it's large size than int
    
    long long num = 1;
    for(int i=n; i>=1; i--){
        num = num*i;
    }
        return num;

}




int main(){

    int n;
    cout<<"Enter no."<<endl;
    cin>>n;

    cout<<"The factorial of "<<n<<" is "<<getFactorial(n)<<endl;

    return 0;
}