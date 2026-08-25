//   Take n elements in an array and find the largest element.

#include<iostream>
using namespace std;

int main(){

    int arr[10];

    int n;
    cout<<"Enter less than 10 no."<<endl;
    cin>>n;

    cout<<"Enter elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){             //  if the condition is true then execute if block otherwise skip or ignore the code inside if.++
            max = arr[i];
        }
    }
            cout<<"Maximum no. "<<max<<endl;

            return 0;
}

// Output:
//  Enter less than 10 no.
//  6
//  Enter elements
//  1 5 9 78 2 3 
//  Maximum no. 78



//   How does it work 

//  int max = arr[0];
//     for(int i=1; i<n; i++){              //  not initialse with int i=0 because its already intialise with int max = arr[0]
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }


// Step:1 -> first initialize max with arr[0] where int max = [0]; so max = 0th index element
// Step:2 -> then loop start
// Step:3 -> initially i = 1 check condition: i<n if true the the loop body executes.
// Step:4 -> First Comparison
//              if(arr[i] > max)
// Since i=1:    arr[1] >  max   if false then max remains same otherwise store current array element

//  Note: ->  The condition basically asking : 
            //                                    Is the current array element greater than the Maximum
            // value I have stored ? If yes , update the maximmum





    // Suppose if  
    // int arr[6] = {10,9,6,3,5,4};

    // int max = [0];

    //     for(int i=1; i<n; i++){
    //         if(arr[i]>max){
    //             max = arr[i];
    //         }
    //     }


//     Step:1  ->  Intialize max
//                int max = arr[10];
//                arr[0] is 10.

//                So: max = 10

//     Step:2  -> Loop Starts
//                 for(int i=1; i<6; i++)
//                  initially i = 1
//                  check condition: i<6 
//                                1<6   -> true   So the loop body executes
                               
//     Step:3  ->     Fist Comparison
//                 if(arr[i] > max)
//         Since i = 1;
//                     arr[1] > max
//                        9 > 10        -> False 
//                 Therefore, max remains max = 10
                
//                    Then : i++
//                     So i = 2
    


 //  similaray loop will continue run till less than six  and print max value.