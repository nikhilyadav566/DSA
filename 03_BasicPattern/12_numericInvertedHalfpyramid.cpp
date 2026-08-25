// create numeric inverted half pyramid

#include<iostream>
using namespace std;

int main(){
    
    for(int row=1; row<=5; row++){
        for(int col=1; col<=(6-row); col++){
            cout<<col;
        }
        cout<<endl;
    }
}

//   Output

// 12345
// 1234
// 123
// 12
// 1