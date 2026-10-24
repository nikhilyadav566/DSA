// find the squareRoot with decimal 
#include <iostream>
using namespace std;

int findSqrt(int n) {
    int start = 0;
    int end = n;
    int target = n;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (mid * mid == target) {
            return mid;
        }
        else if (mid * mid > target) {
            end = mid - 1;
        }
        else {
            ans = mid;
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n;

    cout << "Enter num" << endl;
    cin >> n;

    int output = findSqrt(n);
    cout << "Integer square root is " << output << endl;

    int precision;
    cout << "Enter the number of decimal digits in precision" << endl;
    cin >> precision;

    double step = 0.1;
    double finalOutput = output;

    for (int i = 0; i < precision; i++) {
        for (double j = finalOutput; j * j <= n; j += step) {
            finalOutput = j;
        }

        step = step / 10;
    }

    cout << "Final Output is " << finalOutput << endl;

    return 0;
}


//            OUTPUT

// Enter num
// 10
// Integer square root is 3
// Enter the number of decimal digits in precision
// 5
// Final Output is 3.16227