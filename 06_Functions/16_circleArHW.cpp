//  Write a function to display area of Circle

#include<iostream>
using namespace std;


double findCircleArea(int radius){
    double pie = 3.14159265359;
    double a = pie*radius*radius;
      return a ;

}




int main(){

    int r;
    cout<<"Enter radius"<<endl;
    cin>>r;

    double area = findCircleArea(r);
    cout<<"The area of circle is "<<area<<endl;

        return 0;
}