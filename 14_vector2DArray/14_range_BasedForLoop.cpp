// ===============================================================================
//                     PART 15: RANGE-BASED FOR LOOP
// ===============================================================================

// We can also traverse a 2D vector using range-based loops.


// Example:

//     for(auto row : arr) {

//         for(auto element : row) {

//             cout << element << " ";

//         }

//         cout << endl;

//     }


// Understanding:

//     row

// represents one complete vector (one row).


//     element

// represents one integer inside that row.


// IMPORTANT:

// If we don't want to copy the rows, use reference:

//     for(auto &row : arr) {

//         for(auto &element : row) {

//             cout << element << " ";

//         }

//     }
