// if statement

// syntax 
    //  if(condition)
    //  {
    //     execute statement
    //  }

#include<iostream>
using namespace std;

int main(){
int score ;       // declare a integer type variable
cout<<"Enter Indian Team score"<<endl;  // print Enter Indian Team score
cin>>score ;      // take input into score variable
if(score<352)          // if condition
{
    cout<<"India wins";
}
    cout<<"Pakistan wins";
}

// In it while condition will be true then it will be print both statements.
// but while condition will be false then only print false statement 

//  like as:-> enter 254 then print 
//  India winsPakinstan wins

// And enter 400 then print
// Pakistan wins

// that's why there a need of else condition