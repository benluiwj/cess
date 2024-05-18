#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
/*
For input of 5, we have
4 2 5 3 1

Intuitively, we can space out the difference of the ones by 1.
1 4 2 5 3

For even numbers
Lets say 4, then we have
1 2
  ^
3 4
  ^

2 4 3 1

*/



int main() {
    long long n;
    cin >> n;
    long long value = n;
    vector<long long> output(n);
    // if n is odd, we add the last element to the back first
    long long index = n-1;
    if (value % 2 == 1) {
        output[index] = value;
        value--;
        index--;
    }
    // otherwise, we look at them pairwise from the back.
    long long big = value;
    long long small = value/2;
    long long i = 0;
    while (i <= index) {
        output[i] = small;
        i++;
        output[i] = big;
        i++;
        small--;
        big--;
    }


    for (long long i = 1; i < n; i++) {
        if (abs(output[i] - output[i-1]) == 1) {
            cout << "NO SOLUTION" << endl;
            return 0;
        }
    }

    for (long long i = 0; i< n; i++) {
        if (i == n-1) {
            cout << output[i] << endl;
        } else {
            cout << output[i] << " ";
        }
    }


    return 0;
}
