// ===============================================================================
//                     PART 19: FUNCTION WITH 2D VECTOR
// ===============================================================================

// When passing a 2D vector to a function:


//     void print(vector<vector<int>>& arr)


// Here:

//     vector<vector<int>>

// means:

//     We are passing a 2D vector.


// The & means:

//     Pass by reference.


// Example:


//     void print(vector<vector<int>>& arr) {

//         for(int i = 0; i < arr.size(); i++) {

//             for(int j = 0; j < arr[i].size(); j++) {

//                 cout << arr[i][j] << " ";

//             }

//             cout << endl;

//         }

//     }


// Why vector is easier than normal arrays in functions:

// For normal arrays:

//     int arr[][3]

// We must specify at least the column size.


// But with vector:

//     vector<vector<int>>& arr

// No column size needs to be specified.
