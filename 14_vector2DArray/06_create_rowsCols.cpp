// ===============================================================================
//                     PART 6: CREATE ROWS AND COLUMNS
// ===============================================================================

// Suppose:
//     rows = 3
//     cols = 4

// We can create a 2D vector:

//     vector<vector<int>> arr(rows, vector<int>(cols));

// Example:
//     int rows = 3;
//     int cols = 4;

//     vector<vector<int>> arr(rows, vector<int>(cols));


// BREAKING DOWN THE SYNTAX:
// -------------------------

// Inner part:
//     vector<int>(cols)

// If:
//     cols = 4
// Then:
//     vector<int>(4)

// Creates:

//     [0] [0] [0] [0]


// Outer part:

//     vector<vector<int>>(rows, vector<int>(cols))

// If:
//     rows = 3

// It creates 3 such rows.


// Result:

//     0 0 0 0
//     0 0 0 0
//     0 0 0 0


