// Take n elements and find the second-largest element

#include<iostream>
using namespace std;

int main(){

int arr[10];
 
int n;
cout <<"Enter the size of element"<<endl;
cin>>n;

cout<<"Enter your elements"<<endl;
for(int i=0; i<n; i++){
    cin>>arr[i];      // 5 8 9 2
}

int largest = arr[0];  // so largest = 5
int second = arr[0];     //  second = 5

for(int i=1; i<n; i++){   //  i = 1 -> current value = 8
    if(arr[i]>largest){   // here condition true 
    second = largest;     // So second = 5
    largest = arr[i];    //  And largest = 8
    }                                              //  Now largest = 8 and second = 5

    // then again increment and i=2 -> current value = 9
    else if(arr[i] > second && arr[i] != largest){
          second = arr[i];
    } 
}

    cout<<"Second largest = "<<second;


return 0;
}


// Enter the size of element
// 4
// Enter your elements
// 5 8 9 2
// Second largest = 8
