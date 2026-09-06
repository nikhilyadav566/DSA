//    2D Vector in C++
  
// A vector is a dynamic array provided by the C++ STL (Standard Template Library).

// Unlike a normal array, a vector can:
// 1. Change its size dynamically.
// 2. Store elements continuously (generally like arrays).
// 3. Add elements using push_back().
// 4. Access elements using indexes.

// To use vector:

// #include <vector>

    //    ===============================================================================
    //                         PART 1: 1D VECTOR
    //    ===============================================================================

//     A 1D vector is similar to a normal one-dimensional array.

//     Normal Array:

//     int arr[5];

// Vector:

//     vector<int> arr;


// DECLARATION:
// ------------

//     vector<int> arr;

// This creates an empty vector of integers.


// INITIALIZATION:
// ---------------

//     vector<int> arr = {1, 2, 3, 4, 5};

// Visualization:

//     Index:   0   1   2   3   4
//             -------------------
//     arr:    1   2   3   4   5


// ACCESSING ELEMENTS:
// -------------------

//     arr[0]    // First element
//     arr[1]    // Second element

// Example:

//     cout << arr[2];    // Output: 3


// SIZE OF VECTOR:
// ---------------

//     cout << arr.size();

// Output:

//     5


// ADDING ELEMENT:
//     arr.push_back(6);

// Now:

//     1 2 3 4 5 6


// REMOVING LAST ELEMENT:
//     arr.pop_back();

// Removes the last element.