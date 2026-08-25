// Taking the input of row and columns from users to create pattern .

#include<iostream>
using namespace std;

int main(){

    int rowno;
    cout<<"Enter row no "<<endl;
    cin>>rowno;

    int colno;
    cout<<"Enter column no "<<endl;
    cin>>colno;

    for(int row=1; row<=rowno; row++){
        for(int col=1; col<=colno; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


//     Output

//   Enter row no 
//   4
//   Enter column no 
//   6
//   * * * * * * 
//   * * * * * * 
//   * * * * * * 
//   * * * * * *