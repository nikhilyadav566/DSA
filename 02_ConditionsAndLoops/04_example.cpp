// create a bronum variable in which take input while bronum==0 then print"Baat banjayegi" else "Baat nhi banegi"

#include<iostream>
using namespace std;

int main(){

    int bronum;
    cout<<"Enter brother numbers"<<endl;
    cin>>bronum;

    if(bronum==0){
        cout<<"Baat banjayegi";
    }else{
        cout<<"Baat nhi banegi";
    }
}
