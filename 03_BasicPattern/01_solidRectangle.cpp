// Pattern :-> 
//     It is generally solve by nested loop,
//     it may be by 2 loops or multiple loops,
//     In 2 loops there are two loops use in which 1st is outer and 2nd is inner
// Note:-> we can assume outer loop store (rows) and inner (columns)
 //  but there is not necessary that in outer should be only (row)and inner would be (column) but
 //  generally used as that outer would be assume (no.of rows) and inner would be (how many star want to print -> columns):

//    for(){      -> it may be outer or inner 
//     for(){     -> similarly
//     }
//    }

//    Printing Solid Rectangle

#include<iostream>
using namespace std;

int main(){

    for(int row=1; row<=3;row++){                 // it's outer loop -> row observe
        for(int col=1; col<=5; col++){                    // It's Inner loop -> col observe
            cout<<"*";
        }
         cout<<endl;
    }

    //  It can be also like this 

    // for(int row=0; row<3;row++){
    //     for(int col=0; col<5; col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
}

//    Output

     // *****
     // *****
     // *****


               //   How does it work

    //  step1. firstly check the value of integer in outer loop (where int row=1),
    //  step2. now check condition it's work or not(row<=3),
    //  step3. then goes to inner loop and check the interger value(where int col=1),
    //  step4. and check condition is working or not not (col<=5),
    //  step5. here condition is satisfied then it will print star(*) until the condition will be unsatisfied(*****)this way in first row
    //  step6. and after condition unsatisfied then break the line and come to new line
    //  step7. After this goes to outer loop where updation occur(row++) and check condition is satisfied or not
    //  step8. If satisfied then similary come to inner loop and follow again same process from (step 2).  