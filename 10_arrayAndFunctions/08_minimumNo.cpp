//  Maximum number in an Array

#include<iostream>
#include<climits>       //  INT_MIN is defined in (#include<climits) that's why use 
using namespace std;

int main(){

    int arr[] = {9,4,6,7,1,2,8,0,5};   
    int size = 9;

    int min = INT_MAX;             //  here intialize max variable with the mininum possible interger value i.e (2147483647)

    for(int i=0; i<size; i++){
         if(arr[i]<min){
            min = arr[i];
         }
    }
        cout<<min<<" is mininum no."<<endl;



        return 0;
}

//  Output

//   0 is mininum no.