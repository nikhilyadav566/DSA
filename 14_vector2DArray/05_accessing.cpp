//  Accessing 2D Vector Elements

// ===============================================================================
//                     PART 5: ACCESSING 2D VECTOR ELEMENTS
// ===============================================================================

// Syntax:
//         arr[row][column]

// Example:
//     cout << arr[1][2];

// Visualization:

//         0  1  2
//        ---------
//     0 | 1  2  3
//     1 | 4  5  6
//     2 | 7  8  9


// arr[1][2] = 6


// HOW DOES arr[i][j] WORK?

// Step 1:

//    arr[i]
// selects the complete row.

// Example:
//     arr[1]
// returns:
//     {4, 5, 6}


// Step 2:
//     arr[i][j]

// selects an element from that row.

// Example:
//     arr[1][2]

// First:
//     arr[1] → {4, 5, 6}

// Then:
//     arr[1][2] → 6
