#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
int main() {
    int n;
    cin >> n;

    vector<long long> arr;
    int temp = n;

    while (temp--) {
        int t;
        cin >> t;
        arr.push_back(t);
    }

    long long  moves = 0;
    for (int i = 1; i < n; i++) {

        if (arr[i] < arr[i-1]) {
            moves += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

    cout << moves << endl;



    return 0;
}
