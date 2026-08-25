//  create nth no. of square

#include<iostream>
using namespace std;

int main(){


int n ;
cout<<"Number of rows"<<endl;
cin>>n;

for(int row=1; row<=n; row++){
    for(int col=1; col<=n; col++){
        cout<<"* ";
    }
    cout<<endl;
}

}

//     Output


//    Number of rows
//    4
//    * * * * 
//    * * * * 
//    * * * * 
//    * * * * 