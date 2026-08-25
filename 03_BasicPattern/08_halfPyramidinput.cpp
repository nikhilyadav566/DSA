// create half pyramid by taking input

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter nth no."<<endl;
    cin>>n;

    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// Output

// Enter nth no.
// 5
// *
// **
// ***
// ****
// *****