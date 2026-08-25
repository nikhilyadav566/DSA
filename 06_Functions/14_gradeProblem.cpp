//  Write a function of Students & Grade Problem

#include<iostream>
using namespace std;

char findGrade(int num){
    if(num>= 90){
        return 'A';
    }
    else if(num>=80){
        return 'B';
    }
    else if(num>=70){
        return 'C';
    }
    else if(num>=60){
        return 'D';
    }
    else{
        return 'F';
    }

      //   By the using of swith case

    //   switch(num/10){
    //     case 10: return 'A'; break;
    //     case 9 : return 'A'; break;
    //     case 8 : return 'B'; break;
    //     case 7 : return 'C'; break;
    //     case 6 : return 'D'; break;
    //     default: return 'E';
    //   }

}




int main(){

int marks;
cout<<"Enter your marks"<<endl;
cin>>marks;

char g = findGrade(marks);
         cout<<g<<endl;


}