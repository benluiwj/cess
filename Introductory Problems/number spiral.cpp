#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
/*
(row, col)
1 - (1,1)
2 - (1,2)
3 - (2,2)
4 - (2,1)
5 - (3,1)
6 - (3,2)
7 - (3,3)
8 - (2,3)
9 - (1,3)

if x = y, then the value at that square is x*x - (x-1)
*/
int main() {
    long long n;
    cin >> n;
    while (n--) {
        long long row, col;
        cin >> row >> col;
        if (row == col) {
            cout << row * row - (row-1) << endl;
            continue;
        }
        long long bigger = max(row, col);
        long long diagonal_value = bigger * bigger - (bigger - 1);
        long long result;
        if (row < col) {
            // means that col is bigger and was used in the diagonal value
            // this means that we should look at the row instead.
            // to decide the value, we need to see whether col is even. If its even,
            // then decreasing the column value decreases the diagonal value
            // otherwise it increases
            if (col % 2 == 0) {
                result = diagonal_value - (col - row);

            } else {
                result = diagonal_value + (col - row);
            }
        } else if (row > col) {
            // similarly, if row > col, then we need to adjust the col backwards.
            // the value increases if the row is even and decreases if odd
            if (row % 2== 0) {
                result = diagonal_value + (row - col);
            } else {
                result = diagonal_value + (col - row);
            }
        }
     cout << result << endl;
    }
    return 0;
}
