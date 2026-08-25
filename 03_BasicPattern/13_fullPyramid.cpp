// create full pyramid

#include<iostream>
using namespace std;

int main(){

    for(int row = 1; row <= 6; row++){
        // space print
        for(int col = 1; col <= 6 - row; col++){
            cout << " ";
        }

        // stars print
        for(int col = 1; col <= (2*row - 1); col++){
            cout << "*";
        }

        cout << endl;
    }
}



//  output

//      *
//     ***
//    *****
//   *******
//  *********
// ***********