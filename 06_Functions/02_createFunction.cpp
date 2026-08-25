// create function by the using of void data type which doesn't provide return value.

#include<iostream>
using namespace std;

void printName(){        // here void is a datatype
    int n;
    cout<<"Enter nth no. "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<"Codewiznik"<<endl;
    }
}

int main(){

    printName();     // function call
    printName();

}
 
// output

// Enter nth no. 
// 3
// Codewiznik
// Codewiznik
// Codewiznik
// Enter nth no. 
// 2
// Codewiznik
// Codewiznik

//  Note void data type doesn't provide any return value.