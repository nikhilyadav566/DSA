//Break and Continue Keyword .

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter no."<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<"Nikhil"<<endl;
    }
       cout<<"Yadav"<<endl;

    //  Output 
// Enter no.
// 4
// Nikhil
// Nikhil
// Nikhil
// Nikhil
// Yadav


//  Here 4times 'Nikhil' print and 1time 'Yadav'
//  But while use break in loop then  what happend let's see in next example.

int k;
cout<<"Enter N no. again to know about break"<<endl;
cin>>k;

for(int i=1; i<=k; i++){
    cout<<"Hello"<<endl;
        break;            //  it terminate the loop And go out side of the loop body
}                   //  Here loop body has ended
   cout<<"Bye";       //   now print it one time

// Enter N no. again to know about break
// 5
// Hello
// Bye

// Here the work of break keyword in loop is to print statement one time and left the loop body and goes out the bracket and print the next statement if given .

} 

//  Continue in next file