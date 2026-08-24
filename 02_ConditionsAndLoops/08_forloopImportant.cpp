// Is it necessary to (intialize , condition and update) inside for loop like this

// for(int i=0; i<5; i++){
//     cout<<i<<endl;
// }

//    Answer is no

// we can write it also like this 

// int i=0;                  inilitize here
// for(; ;){                  write two semicolon inside it
//     if(i<5){                here condition will be write along with if
//         cout<<i<<endl;         print statement
//         i++;                     updation
//     }
// }

//     1. Example

#include<iostream>
using namespace std;

int main(){

    int i=0;
    for(; ;){
        if(i<5){
            cout<<i<<endl;
            i++ ;
        }
    }
    //    output 
     //   0
     //   1
     //   2
     //   3
     //   4

    // 2nd question

    int n;
    cout<<"Enter no."<<endl;
    for(; ;){
        if(cin>>n){
            cout<<"Nikhil"<<endl;
        }
    }

}
