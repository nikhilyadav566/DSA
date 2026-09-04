// 1️⃣ What is a 1D Array?

// A 1D array stores elements in a single line.
// int arr[5] = {10, 20, 30, 40, 50};

// Visual representation:

// Index →   0    1    2    3    4
//         ┌────┬────┬────┬────┬────┐
// Value   │ 10 │ 20 │ 30 │ 40 │ 50 │
//         └────┴────┴────┴────┴────┘

// We need only one index to access an element:
// arr[2]  // 30

//   2️⃣ What is a 2D Array?

// A 2D array stores data in rows and columns, like a table or matrix.

// Example:
// int arr[3][4];

// This means:
// 3 rows
// 4 columns

                                // Visual representation:

//                                    Columns
//                               0    1    2    3

//                   Row 0      [ ]   [ ]  [ ]  [ ]
//                   Row 1      [ ]   [ ]  [ ]  [ ]
//                   Row 2      [ ]   [ ]  [ ]  [ ]

                                   // Or:

//                                      Columns
//                                   0   1   2   3
//                                 ┌───┬───┬───┬───┐
//                          Row 0  │   │   │   │   │
//                                 ├───┼───┼───┼───┤
//                          Row 1  │   │   │   │   │
//                                 ├───┼───┼───┼───┤
//                          Row 2  │   │   │   │   │
//                                 └───┴───┴───┴───┘

// A 2D array is basically an array containing multiple rows of arrays.

// 3️⃣ How do we initialize a 2D Array?

// Method 1: Normal initialization
// int arr[3][3] = {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
// };

// Visual:

//           Column
//           0  1  2

// Row 0 →   1  2  3
// Row 1 →   4  5  6
// Row 2 →   7  8  9

// So:

// arr[0][0] = 1
// arr[0][1] = 2
// arr[0][2] = 3

// arr[1][0] = 4
// arr[1][1] = 5
// arr[1][2] = 6

// arr[2][0] = 7
// arr[2][1] = 8
// arr[2][2] = 9

//    4️⃣ How is 2D different from 1D?
//                          1D Array	                     2D Array
//                          Single line	                 Rows + Columns
//                          Uses one index	             Uses two indexes
//                          arr[2]	                     arr[1][2]
//                          Like a list	                 Like a table
//                          One loop usually enough	     Nested loops usually needed


//  5️⃣ How does a 2D array store in memory? 🧠

// This is the important part.

// Although we visualize a 2D array like this:

//                                          1  2  3
//                                          4  5  6
//                                          7  8  9

// In C++, a normal built-in 2D array is stored continuously in memory, row by row.

// Suppose:

// int arr[3][3] = {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
// };

// Memory looks conceptually like:

// Memory →

// ┌────┬────┬────┬────┬────┬────┬────┬────┬────┐
// │ 1  │ 2  │ 3  │ 4  │ 5  │ 6  │ 7  │ 8  │ 9  │
// └────┴────┴────┴────┴────┴────┴────┴────┴────┘

// But logically, C++ interprets it as:

//           arr

//         Column
//          0   1   2
//        ┌───┬───┬───┐
// Row 0  │ 1 │ 2 │ 3 │
//        ├───┼───┼───┤
// Row 1  │ 4 │ 5 │ 6 │
//        ├───┼───┼───┤
// Row 2  │ 7 │ 8 │ 9 │
//        └───┴───┴───┘

// This storage method is called Row-Major Order.



//    The memory address formula for accessing a 2D array. 👍

// For a 2D array stored in row-major order (C/C++), the address formula is:

// Formula
// Address of arr[i][j]
// = Base Address + ((i × number_of_columns) + j) × size_of_each_element

// Or simply, the linear index is:

// (i × columns) + j
// Example
// int arr[3][3] = {
//     {10, 20, 30},
//     {40, 50, 60},
//     {70, 80, 90}
// };

// For:

// arr[2][1]

// We have:

// i = 2 → row
// j = 1 → column
// columns = 3

// Formula:

// (i × columns) + j

// (2 × 3) + 1
// = 7

// So arr[2][1] is at linear position/index 7:

// Memory:

// Index →  0   1   2   3   4   5   6   7   8
//          ┌───┬───┬───┬───┬───┬───┬───┬───┬───┐
// Value →  │10 │20 │30 │40 │50 │60 │70 │80 │90 │
//          └───┴───┴───┴───┴───┴───┴───┴───┴───┘
//                                       ↑
//                                    arr[2][1]

// So yes, i × number_of_columns + j is the formula you may be thinking of.

// Important distinction

// You wrote something like:

// C*i + j

// Exactly — if C means number of columns, then:

// C × i + j

// gives the linear offset of arr[i][j] in row-major order.

// For C++:

// arr[i][j] → offset = (i × C) + j

// This is mainly useful for understanding how a 2D array is mapped into contiguous memory.