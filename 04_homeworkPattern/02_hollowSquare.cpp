#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter nth no."<<endl;
    cin>>n;

    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            if(row==1 || row==n || col==1 ||col ==n){
                cout<<"*";
            }
            else{
            cout<<" ";
        }
        }
        cout<<endl;
    } 
}   

//  Output

// Enter nth no.
// 8
// ********
// *      *
// *      *
// *      *
// *      *
// *      *
// *      *
// ********