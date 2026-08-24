// if-else conditions

#include<iostream>
using namespace std;

int main (){
     
    int score;
    cout<<"Enter the score"<< endl;
    cin>>score;

    if(score<350){
        cout<<"India wins"<< endl;
    }else{
        cout<<"Pakinstan wins"<<endl;
    }

    // Eligiblity for vote next exaple

    int age ;
    cout<<"Enter your age"<<endl;
    cin>> age;
    
    if(age>=18){
        cout<<"You are eligible for vote"<<endl;
    }else{
        cout<<"Sorry you are not eligible"<<endl;
    }
}
