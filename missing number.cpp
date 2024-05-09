#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<bool> input(n+1, false);
    int tmp = n;

    while (tmp--) {
        int t;

        cin >> t;

        input[t] = true;
    }


    input[0] = true;

    for (int i = 0; i < n+1; i++){
        if (!input[i]) cout << i << endl;
    }
    return 0;
}
