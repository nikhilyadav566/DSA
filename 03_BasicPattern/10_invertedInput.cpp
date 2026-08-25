//   create inverted half pyramid through input


#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter nth no."<<endl;
    cin>>n;

    for(int row=1; row<=n; row++){
        for(int col=1; col<=(n+1-row); col++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//   Output

// Enter nth no.
// 10
// **********
// *********
// ********
// *******
// ******
// *****
// ****
// ***
// **
// *