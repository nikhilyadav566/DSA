// Access an element at index

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[] = {2,3,4,5,6};

//     int size = sizeof(arr) / sizeof(arr[0]);

//     int n;
//     cout<<"Enter index number"<<endl;
//     cin>>n;

//     if(n >= 0 && n < size){
//         cout<<arr[n]<<" is found at "<<n<<" th index"<<endl;
//     }
//     else{
//         cout<<"Invalid index!"<<endl;
//     }

//     return 0;
   
// }
//    OUTPUT

// Enter index number
// 3
// 5 is found at 3 th index





//  update an element at index
#include<iostream>
using namespace std;

int main(){

    int arr[] = { 2,4,5,6,7,9};

    int size = sizeof(arr)/sizeof(arr[0]);

    int index;
    cout<<"Enter index which element do you want to update"<<endl;
    cin>>index;

    int value;
    cout<<"Enter new value"<<endl;
    cin>>value;

    if(index >= 0 && index < size){
        arr[index] = value;

        cout<<"Updated array"<<endl;

        for(auto value : arr){
            cout<<value<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"Invalid index!"<<endl;
    }


    return 0;
}
