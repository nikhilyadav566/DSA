//  Input parameter in function
//  This is called pass by value concept


#include<iostream>
using namespace std;

void printNumber(int a){   //  instead of 'a' we can use anything like as num etc.  here is copy create of input parameter
    cout<<a<<endl;
}

int main(){

    int a = 6;
    printNumber(a);      // this 'a' and above (int a) are different it's not same both have different address

    return 0;
}

//   Output
//    6

//       How does it work
// ---------------------------
//   Step1:-> First main() start to be execute,
//   Step2:-> Where in main function it there is function call (i.e. printNumber (a)) in which 'a' is a input parameter (pass value),
//   Step3:-> While printNumber(a) function call then
//   Step4:-> Above inside printNumber function create its own 'a' means copy create here of the input parameter
//   Step5:-> Both 'a' in printNumber(a); and printNumber(int a) are different both have different locations in memory.

// Note:-> While call any function in which there is pass value (means input parameter) , then inside that function copy created of that intput parameter i.e.(int a) on different location3

//         We Can Say
//   Note:-> Pass by value = copy create