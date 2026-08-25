// create hollow square by taking row and column as input

#include<iostream>
using namespace std;

int main(){

    int rowno;
    cout<<"Enter row number"<<endl;
    cin>>rowno;

    int colno;
    cout<<"Enter col number"<<endl;
    cin>>colno;


    for(int row=1; row<=rowno; row++){
        if(row==1 || row==rowno){
            for(int col=1; col<=colno; col++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int i=1; i<=(colno-2); i++){
                cout<<" ";
            }
            cout<<"*";
        }
            cout<<endl;
    }
}

//   Output

// Enter row number
// 8
// Enter col number
// 6
// ******
// *    *
// *    *
// *    *
// *    *
// *    *
// *    *
// ******