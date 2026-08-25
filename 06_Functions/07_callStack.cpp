// Function Call Stack 

//  Stack :-> It is a data structure in which data sotored in a specific way.
//  It follows LIFO (Last In First Out)
//  While put elements in stack then it pickup Last element first.

//  While call function then it goes to stack.

//            Example

#include<iostream>
using namespace std;

int printAge(){
    int n;
    cout<<"Enter your age in year"<<endl;
    cin>>n;

    cout<<"You are "<<n<<" years old"<< endl;
}

int main(){
    printAge();

    return 0;
}


//  Output
// Enter your age in year
// 18

//  First of all how does it work in stack

//   Step1:->  As we know that main() will execute first because compiler start execution from main()function.
//   Step2:->  then main() will go inside stack first and then after code start execute but
//   Step3:->  Inside it there is printAge() is being called (As we know while we call any function it will goes insid the stack) that's why it goes inside stack
//   Step4:->  which would be second position from last and main function will be on first position
//   Step5:->  And Inside printAge() there is not any call function or function that's 
//   Step6:->  So execute the statement which are in printAge() 
//   Step7:->  And after execute whole codes of printAge() then it will be pop out(remove or delete) from the stack
//   Step8:->  And then come to the main function where see return 0 which means main() executed successfully
//   Step9:->  that's why it will also pop out from the stack and stack will be empty .
//   Step10:-> Here main() return 0 to operating system.



//   It is the workflow of Stack during execution.