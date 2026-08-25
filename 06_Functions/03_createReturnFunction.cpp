// In function there would be return value if any function which have not return value then it will be void datatype.

// syntax:

// Return type  function name(a,b)     // where a & b are input parameter
// {    //  function body
//     ____________
//     ____________       
//     ____________
// }


//   Return type :-> having any datatypes like as int, void , float , double etc
//   function name :-> it would be logical and meaningfull name.

//   Now come to main function main()

// int main()        // here int is return type which return integer value and main is a function
// {                  // Its curly braces
//     ________
//     ________         // all these from where curly braces start and end  are called function body
//     ________

//   return 0;          //  From now we will use return 0; 
                 // which means main()function successfully executed
                  // so zero(0) means successfully execution. 

// }

//             Example 1.

 #include<iostream>
 using namespace std;

 int sumNumber(){
    int n;
    cout<<"Enter nth  to get sum"<<endl;
    cin>>n;

    int sum=0;
    for(int i=1; i<=n; i++){
        sum = sum+i;
    }
    cout<<"Total sum = "<<sum<<endl;
 }

 int main(){
    sumNumber();
    return 0;
 }

 //   Enter nth  to get sum
//    3
//    Total sum = 6
