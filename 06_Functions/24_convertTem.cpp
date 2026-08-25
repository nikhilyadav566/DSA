//  Convert temperature from celcius to kelvin and farehnite

#include<iostream>
using namespace std;

float kelvinTemp(float cel){
    float k = cel+273.15;
    cout<<"Kelvin = "<<k<<endl;
    float f = cel*1.80+32;
    cout<<"Farehnite "<<f<<endl;
}


int main(){

    float cel;
    cout<<"Enter celcius "<<endl;
    cin>>cel;

    kelvinTemp(cel);
}