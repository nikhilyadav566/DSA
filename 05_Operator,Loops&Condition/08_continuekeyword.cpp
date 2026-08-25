//   Continue keyword

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter nth no."<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
            continue;
          cout<<"Good Morning"<<endl;
    }
        cout<<"Nikhil";
}

//    Output

//    Enter nth no.
//     4
//    Nikhil      //  Good Morning statement has not printed only Nikhil has printed because of continue keyword which is described below


//  Note :->This keyword means where apply continue keyword then it skip to print below statement or code which would be in same bracket.

//  step:1-> But here in loop i=1 then check condition i<=n or not,
//  step:2-> if condition is true then come at continue keyword .
//  step:3-> then it left (skip) to execute the below code.
//  step:4-> And then goes to update section where increased by 1(i++).
//  step:5-> Now the value of i=2 after updation and now again check the condition (i<=n) or not
//  step:6-> If condition true then again go to the continue keyword.
//  step:7-> And the same process will do continue it skip to execute below code and send again to update .
//  step:8-> This process will happening until then condition will not be false .
//  step:9-> While condition will be false then left the loop body.
//  step:10-> After left the loop body it goes to next line 
//  step:11-> At next line there is given to print 'Nikhil' statement  (if there is given some code then execute otherwise nothing execute)
//  step:12-> And it will be executed  



