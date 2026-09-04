#include<iostream>
using namespace std;

int main(){

    // 4 Rows and 3 Columns
    int arr[4][3];
    int brr[4][3];


    // =====================================
    // 1. ROW-WISE INPUT
    // =====================================

    cout << "Enter 12 elements for Row-wise input:" << endl;

    // i = Row
    // j = Column
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }


    // =====================================
    // ROW-WISE PRINTING
    // =====================================

    cout << "\nRow-wise Array:" << endl;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    // =====================================
    // 2. COLUMN-WISE INPUT
    // =====================================

    cout << "\nEnter 12 elements for Column-wise input:" << endl;

    // j = Column
    // i = Row
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 4; i++){
            cin >> brr[i][j];
        }
    }


    // =====================================
    // PRINTING COLUMN-WISE INPUT AS MATRIX
    // =====================================

    cout << "\nColumn-wise input Array:" << endl;

    // We print row-wise to see how the
    // values were actually stored
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}



//    OUTPUT


// Enter 12 elements for Row-wise input:
// 1 2 3 4 5 6 7 8 9 10 11 12

// Row-wise Array:
// 1 2 3 
// 4 5 6 
// 7 8 9 
// 10 11 12 

// Enter 12 elements for Column-wise input:
// 1 2 3 4 5 6 7 8 9 10 11 12

// Column-wise input Array:
// 1 5 9 
// 2 6 10 
// 3 7 11 
// 4 8 12 