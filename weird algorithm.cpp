#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    long long int n;
    cin >> n;

    while (n != 1) {
    cout << n << " ";
        if (n% 2) {
            n = 3*n + 1;
        } else {
            n = n / 2;
        }


    }
            cout << 1 << "\n";
    return 0;
}
