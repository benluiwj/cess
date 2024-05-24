#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;
/*
Intuition - we need to recursively divide N! by 10 to get number of 0s.
This also means that each N can be expressed as a prime factorisation of
2 and 5. So, 2^a * 5*b = N, where a >= b. Since 10 = 2 * 5, we aim to
calculate the value of b here. So the time complexity will be log_5(N).
*/
int main() {
    ll int n;
    cin >> n;

    int result = 0;
    for (int i = 5; n / i > 0; i *= 5) {
        result += n / i;
    }

    cout << result << endl;

    return 0;
}
