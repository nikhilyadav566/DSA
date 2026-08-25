//  Functions:  Linked with a well-defined taks.

//   It is a such type of program which is linked with a well-defined taks

#include <iostream>
using namespace std;

int main (){

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<i<<" Nikhil"<<endl;
    }

        //  copy and paste above code

    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<i<<" Nikhil"<<endl;
    }

    //   Again copy and paste above code

    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<i<<" Nikhil"<<endl;
    }
}


// Enter the value of n
// 2
// 1 Nikhil
// 2 Nikhil
// Enter the value of n
// 3 
// 1 Nikhil
// 2 Nikhil
// 3 Nikhil
// Enter the value of n
// 4
// 1 Nikhil
// 2 Nikhil
// 3 Nikhil
// 4 Nikhil



//  Note here we found one thing that we are getting output in well structure but the
//  codes are too lengthy or bulky in source code.

//  If i want to input multiple times then we are having to copy and paste this code multiple times 
//  that's why need to function to perform well defined task and 

//   So why need function 
//  1.  because of lengthy or Bulky
//  2.  Not Reusing             (As we see here is copy & paste of the code not reusing )
//  3.  Buggy                 (If the main parent loop code has any error then the entire code will be error where paste it.)
//  4.   Not Readable           (it's not readble because too much codes)


//   But in function there is not need to copy and paste in function only reusablity.