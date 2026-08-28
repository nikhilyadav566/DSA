// "Write a C++ program to search for an element in an array using Linear Search."

#include<iostream>
using namespace std; 

bool find(int arr[], int size, int key){
        for(int i=0; i<size; i++){
            if(arr[i]==key){
                return true;
            }
        }
                return false;
}


int main(){

    int arr[] = {2,3,4,6,8};
    // int arr[5] = {2,3,4,6,8}     we can also type like this 
    int size = 5;


    cout<<"Enter the key to find "<<endl;
    int key;
    cin>>key;

    if(find(arr, size, key)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}


//   How does it execute

// 1. What is this program doing?

// The program:

//1. Creates an array.
//2. Takes a number (key) from the user.
//3.  Searches for that number in the array.
//4.  If found → prints Found.
//5.  If not found → prints Not found.

// This is called Linear Search because it checks elements one by one.

// 2. Start execution from main()

// C++ starts executing from:
// int main()

// So it reaches:
// int arr[5] = {2,3,4,6,8};

// The array looks like this:

// Index:    0   1   2   3   4
//           ↓   ↓   ↓   ↓   ↓
// Array:    2   3   4   6   8

// There are 5 elements.

// 3. Then this line executes
//  int size = 5;

// 4. Program asks for the key
// cout << "Enter the key to find " << endl;

// You see:
// Enter the key to find
// Then:
// int key;
// cin >> key;

// Suppose you enter:
// 6
// Now:
// key = 6

// 5. Now this line executes
// if(find(arr, size, key))

// The function call is:

// find(arr, 5, 6)

// So the function receives:

// arr  → {2, 3, 4, 6, 8}
// size → 5
// key  → 6

// Now execution goes inside:

// bool find(int arr[], int size, int key)

// 6. The for loop starts
// for(int i=0; i<size; i++)

// Since:
// size = 5
// the loop runs with:
// i = 0
// i = 1
// i = 2
// i = 3
// i = 4

// Now let's see each iteration.
// Iteration 1
// i = 0

// This executes:
// if(arr[i] == key)
// which means:

// if(arr[0] == 6)
// arr[0] is 2.
// So:
// 2 == 6
// ❌ False.

// Therefore, don't execute return true.

// The loop continues.

// Iteration 2
// i = 1
// Check:
// arr[1] == key
// That means:
// 3 == 6
// ❌ False.

// Continue.

// Iteration 3
// i = 2
// Check:
// arr[2] == 6
// That means:
// 4 == 6
// ❌ False.

// Continue.

// Iteration 4
// i = 3
// Check:
// arr[3] == 6
// That means:
// 6 == 6
// ✅ True!

// Therefore:

// return true;

// The function immediately stops.

// 7. Where does true go?

// Remember this:

// if(find(arr, size, key))

// The function returned:
// true

// So this becomes conceptually:
// if(true)
// Therefore this executes:
// cout << "Found" << endl;

// Output:
// Found



// Complete execution flow

// If the user enters 6:

// main()
//   ↓
// Create array
//   ↓
// key = 6
//   ↓
// find(arr, 5, 6)
//   ↓
// i = 0 → 2 == 6 ❌
//   ↓
// i = 1 → 3 == 6 ❌
//   ↓
// i = 2 → 4 == 6 ❌
//   ↓
// i = 3 → 6 == 6 ✅
//   ↓
// return true
//   ↓
// if(true)
//   ↓
// Found