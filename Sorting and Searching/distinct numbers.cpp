#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_set>
#define SIZE 200000
using namespace std;
int main() {

    unordered_set<long long> freq;
    freq.reserve(SIZE);
    int n;
    cin >> n;
    int count = 0;
    while (n--) {
        long long t;
        cin >> t;
        if (freq.find(t) == freq.end()) {
            freq.insert(t);
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
