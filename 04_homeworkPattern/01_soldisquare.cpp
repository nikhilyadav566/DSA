#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"input nth no."<<endl;
    cin>>n;
    
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// output

// input nth no.
// 6
// * * * * * * 
// * * * * * * 
// * * * * * * 
// * * * * * * 
// * * * * * * 
// * * * * * * 