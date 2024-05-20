#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#define MOD 1000000007

using namespace std;
int main() {
    int n;
    cin >> n;
    long long result = 1;
    while (n--) {
        result = result << 1;
        result = result % MOD;
    }

    cout << result << endl;
    return 0;
}
