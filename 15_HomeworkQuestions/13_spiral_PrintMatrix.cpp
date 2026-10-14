
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> arr = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15, 16}
    };

    int rows = arr.size();
    int cols = arr[0].size();

    int startRow = 0;
    int endRow = rows - 1;
    int startCol = 0;
    int endCol = cols - 1;

    while (startRow <= endRow && startCol <= endCol) {

        // 1. Print top row: left to right
        for (int i = startCol; i <= endCol; i++) {
            cout << arr[startRow][i] << " ";
        }
        startRow++;

        // 2. Print right column: top to bottom
        for (int i = startRow; i <= endRow; i++) {
            cout << arr[i][endCol] << " ";
        }
        endCol--;

        // 3. Print bottom row: right to left
        if (startRow <= endRow) {
            for (int i = endCol; i >= startCol; i--) {
                cout << arr[endRow][i] << " ";
            }
            endRow--;
        }

        // 4. Print left column: bottom to top
        if (startCol <= endCol) {
            for (int i = endRow; i >= startRow; i--) {
                cout << arr[i][startCol] << " ";
            }
            startCol++;
        }
    }

    return 0;
}

// Output 
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10


// 1. int rows = arr.size();
//     arr is your 2D vector.
//     arr.size() tells you how many rows are present.
//     Here, there are 3 rows.
// So, rows = 3.


// 2. int cols = arr[0].size();
//    arr[0] means the first row of the matrix.
//    arr[0].size() tells you how many elements are in that row.
//    Here, the first row contains 3 elements.
// So, cols = 3.