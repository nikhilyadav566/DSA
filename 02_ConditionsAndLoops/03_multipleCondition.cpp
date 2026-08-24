// multiple conditions
#include<iostream>
using namespace std;

int main (){

int marks;
cout<<"Enter your marks"<<endl;
cin>>marks;

if(marks>600){
    cout<<"Grade A"<< endl;
 }
 else{
    if(marks>500 && marks<=600){
    cout<<"Grade B"<< endl;
    }
    else{
        if(marks>400 && marks<=500){
            cout<<"Grade C"<< endl;
        }
        else{
            if(marks>300 && marks<=400){
                cout<<"Grade D"<<endl;
            }
            else{
                cout<<"Fail";
            }
        }
    }
 }

}

//   in short way we can write like this 
// if-elseif-else

// if(marks>=600){
//     cout<<"Grade A";
// }
// else if(marks>500 && marks<=600){
//     cout<<"Grade B";
// }
// else if(marks>400 && marks<=500){
//     cout<<"Grade C";
// }
// else if(marks>300 && marks<=400){
//     cout<<"Grade D";
// }
// else{
//     cout<<"Fail";
// }