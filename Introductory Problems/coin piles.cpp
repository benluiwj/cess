#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_set>
#include <algorithm>

#define ll long long

using namespace std;
/*
Intuition - the number of times we can remove 1 coin from A is X and the number of times
we can remove 2 coins from A is Y. Then the total number of coins in A = X + 2Y. Similarly,
when X occurs for A, we remove 2 coins for B and likewise for Y. So B = 2X + Y.
Since the goal is to make each pile 0, we solve simulatenous equations for X,Y that makes both equal to 0.
Then we get the value of X = (2B - A) / 3 and Y = (2A - B) / 3. So just verify that both values are positive
and leave no remainder
*/
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        ll x = 2 * b - a;
        ll y = 2 * a - b;
        if (x >= 0 && x % 3 == 0 && y >= 0 && y % 3 == 0) {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}
