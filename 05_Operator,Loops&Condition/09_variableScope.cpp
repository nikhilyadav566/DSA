//  Variable Scope

#include<iostream>
using namespace std;

int id = 17142 ;    // It is global varible  which can access from anywhere in the same file.

int main(){
 
    int a;         // declaration
    int b=5;        // initialisation  local variable
    b=10;           // updation
    b=20;              //  update
    //  int b=30;        // but can't reinitialisation
    // Note:->  we can't reinitalise no if already intialise once but updation can be multiple times

  if(true){
    int b=15;            // local variable
    cout<<b<<endl;     //  15
    cout<<id<<endl;        // 17142
  }

  if(true){
    cout<<b<<endl;     //  20
  }                  //  if there  is not initialise no then it takes from the parent {} baraces of main().



  cout<<b<<endl;        //20
  cout<<id<<endl;      // 17142

}

//  As we know we cannot reintialise  with in same braces{} but update can be.
//  So we can say that the scope of variable is only in their curly braces {}.


//  But inside int main(){ } initialisation of variable is called local variable.
