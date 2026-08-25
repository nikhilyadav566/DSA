// Pass by value
//  The function receives a copy.

#include<iostream>
using namespace std;

void change(int x){
    x = 100;
    cout<<x<<endl;

}

int main(){

    int a = 10;

    change(a);

    cout<<a;
}


//   Output
//    100
//     10


//  Note:->     The function changed x, but a in main() did not change .

//     Value -> copy -> original usually does NOT change.