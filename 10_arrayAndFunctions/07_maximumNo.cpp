//  Maximum number in an Array

#include<iostream>
#include<climits>         //  INT_MIN is defined in (#include<climits) that's why use Without it, get error like 
                          //      'INT_MAX' was not declared in this scope 
using namespace std;

int main(){

    int arr[] = {2,4,1,6,8,9,0};
    int size = 7;
    //  here intialize max variable with the mininum possible interger value i.e (-2147483648)

    int max = INT_MIN;   //  INT_MIN which means minimum possible integer value
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            // found a number greater than max, update max
            max = arr[i];
        }
    }
        cout<<max<<" is maximum  no."<<endl;

        return 0;
}

// Output

// 9 is maximum  no.

//  Note :->
//      Always remember one thing that if we have to find Maximum no.
//       then we have to initialize it from INT_MIN(means mininum integer) i.e -> -2147483648

//   And in the case of Minimum
//      we have to initialize from INT_MAX(means maximum integer) i.e -> 2147483647


// While print INT_MIN and INT_MAX
// cout<< INT_MIN << endl;    output-> -2147483648
// cout<< INT_MAX << endl;    output->  2147483647

//  it's the range of intger value is from(2^31    to    2^31-1)
//                                           ↓              ↓
//         which means                (-2147483648 -> 2147483647)
//                                           ↓              ↓
//                                     mininum value       maximum value


//         NOW WHY DID USE # include<climits>
//      here:
//   <cimits> -> header file containing integer limits

//   <climits -> It provides constants that tell us the minimum and maximum values
//                 that integer data types can store, such as INT_MIN and INT_MAX.

//  that's why i used it because I needed INT_MINto initialize my max variable.
