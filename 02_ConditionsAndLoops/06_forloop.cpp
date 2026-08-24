// 1. for loop 
// syntax:-

// for(int i=0; int<5; i++){

//     code execute

// }

// step 1:-> firt initialize here (int i=0) is initialise.
// step 2:-> now apply condition like as (int<5) its condition.
// step 3:-> and then update(i++)it may be increment or decrement.
// step 4:-> after that execute code which would be below it to be execute.

#include<iostream>
using namespace std;

int main(){
    
    for(int num=0; num<4; num++){
        cout<<"Nikhl Yadav"<<endl;
    }
        cout<<"Printed"<<endl;

}

//  step1-> initialise num = 0
//  step2-> then check condition is true or not 
//  step3-> now condition is true then print( Nikhil Yadav)
//  step4-> and after this go to update section where increse by 1(num++) 
//  step5-> and again check codition if codition true then print (Nikhil Yadav)
//  step6-> Similarly this process will happen until the conditon will not be false.
//  step7-> while condition will be false then execute outer statement which is (Printed)

//   Ouput
//   Nikhil Yadav
//   Nikhil Yadav
//   Nikhil Yadav
//   Nikhil Yadav
//   Printed
