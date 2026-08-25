// Pre/Post-> Increment/Decrement Operator

// 1. a++
// 2. ++a
// 3. A--
// 4. --A 

//  Pre Increment (++a)
//   means first increment the no then use it.
//  ex:->     int a = 6;
//              ++a;            // here increment in 'a' by 1
//            cout<<a;  output -> 7

//  Post Increment (a++)
//  means first use then decrement
// ex:->      int b = 6;
//              b++;
//            cout<<b<<endl;    output-> 6 first use
//            cout<<b;          output-> 7

#include <iostream> 
using namespace std;

int main(){

    int a = 9;
      ++a;         // And in it there are two operation occur first increment in value and then use(first increase in value by 1 and become 10 then goes to the memory and new value become 10)
    cout<<a<<endl;  // 10

    int b = 11;
      b++;      //  There are also two operation occur here but first use the value and then increment (in memory first goes 11 and then increase it by 1 and become 12)
    cout<<b<<endl;
}