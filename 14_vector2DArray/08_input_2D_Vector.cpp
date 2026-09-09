// ===============================================================================
//                     PART 8: USER INPUT IN 2D VECTOR
// ===============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int rows, cols;

    cout << "Enter rows: ";
    cin >> rows;

    cout << "Enter columns: ";
    cin >> cols;


    // Creating 2D vector
    vector<vector<int>> arr(rows, vector<int>(cols));


    // Taking input
    cout<<"Enter elements"<<endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Printing output
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



//   OUTPUT
// Enter rows: 3
// Enter columns: 3
// Enter elements
// 1 2 3 4 5 6 7 8 9
// 1 2 3 
// 4 5 6 
// 7 8 9 


