// create inverted Half pyramid pattern

#include<iostream>
using namespace std;

int main(){

    for(int row=1; row<=6; row++){
        for(int col=1; col<=7-row; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//     Output

//     ******
//     *****
//     ****
//     ***
//     **
//     *