// here questions

#include<iostream>
using namespace std;

int main(){

    int a = 5;
    int b = 6;
    int c = (a++)*(--b);    //  here multiplication between post increment(where first use the value then increment so here take a=5) and pre decrement(where first decrement the value then use so here take b=5)
    cout<<c<<endl;      // output -> 25 
    cout<<(--a)*(b++)<<endl;   //  -> 25   But here there is multiplication between pre decrement and post increment where 'a' = 5 but there is increment by 1 already above after using once so the actual value of 'a' will be 6 ,
    cout<<b<<endl;   // << 6
 

    // but in there is pre decrement so here 'a' will be 5 ,
    // Similarly already the value of b is 5 by the using of pre-decrement in first question,,
    // but in this question ther is post increment that's why its value will be 5 because ,
    // as we know in post decrement first use the decrement.

    int k = 5;
    cout<<(++k)*(++k)<<endl;   // output 49 because of operator precedence we will study next file


}