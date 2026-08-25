//   Example 

#include<iostream>
using namespace std;

int collegeId(int num){       

    cout<<"Address of id in collegeId function "<<&num<<endl;    //  The address of Num is 0x61fef0  
    cout<<"Your id is "<<num<<endl;
}

int main(){

    int id = 17142;
    cout<<"Address of id in main function  "<<&id<<endl;  //  Address of id is 0x61ff0c

    collegeId(id);           //  here id is called argument 

    return 0;
}

//   we can use anything instead of input parameter in collegeId(int num),
//   Also both have different location.

//   ('&')-> by the using of this we can find out the address of the datatype.
//              its called address of operator.