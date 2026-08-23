#include<iostream>
using namespace std;

int main(){
    int a = 5;
    cout<<"value of a is " <<a<<endl;

    char ch = 'a';
    cout<<"value of ch is " <<ch<<endl;

    bool flag = true;
    cout<<"value of flage is "<<flag<<endl;  // output will be 1 which means true while output will 0 then means false
     
     //  To see the size of data type
    int b = 6;
    cout<<sizeof(b)<<endl; // output will be 4

    char cha = '100' ;
    cout<<sizeof(cha)<<endl;   // 1
    
    bool c = 9;
    cout<<sizeof(c)<<endl;     // 1

    float d = 10;
    cout<<sizeof(d)<<endl;    // 4
    
    double e = 11;
    cout<<sizeof(e)<<endl;    // 8

    long f = 12;
    cout<<sizeof(f)<<endl;    //4

    long long g = 15;
    cout<<sizeof(g)<<endl;      // 8


}

// smallest addressible memory is 1 byte