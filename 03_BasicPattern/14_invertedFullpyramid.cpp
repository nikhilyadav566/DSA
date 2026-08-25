// create inverted full pyramid

#include<iostream>
using namespace std;

int main(){

    for(int row=1; row<=4; row++){
        // space print
        for(int col=1; col<=(row-1); col++){
            cout<<" ";
        }
        // star print
        for(int col=1; col<=2*(4-row)+1; col++){
            cout<<"*";
        }
        cout<<endl;

    }
}

//   Output

// *******
//  *****
//   ***
//    *