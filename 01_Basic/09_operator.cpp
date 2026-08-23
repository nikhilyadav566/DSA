// There are five operators 
//    1. Arithmetic
//    2. Relation
//    3. Assignment
//    4. Logical
//    5. Bitwise


# include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 5;
    float k = 9;

    // 1.Arithmetic (+,-,*,/,%)

    cout<<"Sum = "<<a+b<<endl;               // 15
    cout<<"Sub = "<<a-b<<endl;                // 5
    cout<<"Multi = "<<a*b<<endl;                // 50
    cout<<"Division = "<<a/b<<endl;              // 2
    cout<<"Division = "<<k/b<<endl;           // 1.8
    cout<<"Remainder = "<<a%b<<endl;              // 0      
    cout<<"Remainder = "<<(int)k%b<<endl;         // 4 here first typecaste the float into int then divide.

    // 2. Relational (>,<,>=,<=,!=,==)

    int c = 9;
    int d = 70;       

    cout<<(c>d)<<endl;    // output  0 :-> means false
    cout<<(c<d)<<endl;     // 1 :-> means true
    cout<<(c>=d)<<endl;     // 0
    cout<<(c<=d)<<endl;      // 1
    cout<<(c!=d)<<endl;     //  1
    cout<<(c==d)<<endl;      // 0

   // 3. Assignment Operator (=, +=, -=, *=, /=, %=)
   // It is used to assign/store a value in a variable .
   int m = 45;   // here m store 45 or 
   m += 5;          // means 5 assign to m in given first m value
   cout <<m<< endl;   // output: -> 50

   m -= 25;
   cout <<m<< endl;  // 25

   m *= 2;
   cout <<m<< endl; // 50

   m /= 10;
   cout <<m<< endl; // 5

   m %= 3;
   cout <<m<< endl; // 2



   // 4.Logical Operator ( &&,||,!)  -> AND, OR, NOT
   // It is used while we have multiple condition
        // AND
   cout << (a<=10 && b>=5) << endl;    // output:-> 1 means true (In AND condition both (all) conditions would be true then it's output will be 1 otherwise 0 which means false.)
   cout << (a>=15 && b>=5) << endl;     // 0 
         // OR
   cout << (c!=d || c<=d) << endl;    // 1 (In OR condition one of the given condition would be true then it's output will be 1 otherwise all condition will be false then output will be 0.)
   cout << (c==d || b>10) << endl;  // 0
         // NOT
   cout << !(a<=10 && b>=5) << endl;     // 0 -> (In NOT condition it gives the opposite output which would be while use this(!) symbol before applying condition)
   cout << !(a>=15 && b>=5) << endl;   // 1

// Bitwise Operator :-> Study it after two lectures   


}   

