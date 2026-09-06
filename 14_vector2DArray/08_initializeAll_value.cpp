//  Initialize all values with a number 

// ===============================================================================
//                 PART 7: INITIALIZE ALL VALUES WITH A NUMBER
// ===============================================================================

// Syntax:
//     vector<vector<int>> arr(rows, vector<int>(cols, value));

// Example:
//     vector<vector<int>> arr(3, vector<int>(4, 5));

// This creates:

//     5 5 5 5
//     5 5 5 5
//     5 5 5 5


// Explanation:
//     vector<int>(4, 5)

// means:
//     Create 4 elements and initialize every element with 5.
// Then:
//     vector<vector<int>>(3, vector<int>(4, 5))
// means:
//     Create 3 rows, where every row contains:

//     5 5 5 5