// ===============================================================================
//                     PART 14: GETTING NUMBER OF COLUMNS
// ===============================================================================

// For a particular row:

//     arr[i].size()


// Example:

//     cout << arr[0].size();


// Output:

//     3


// IMPORTANT:

// For jagged vectors, every row can have a different size.

// Therefore, instead of assuming:

//     cols = arr[0].size()

// inside every loop, we can write:

//     arr[i].size()


// Best approach:

//     for(int i = 0; i < arr.size(); i++) {

//         for(int j = 0; j < arr[i].size(); j++) {

//             cout << arr[i][j] << " ";

//         }

//         cout << endl;

//     }