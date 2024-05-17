#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
int main() {
    string input;
    cin >> input;

    int result = -1;
    int start = 0;
    int length = input.length();

    for (int i = 0; i < length; i++) {
        if (input[start] != input[i]) {
            result = max(result, (i-1) - start + 1);
            start = i;
        }
    }
    result = max(result, (length-1) - start + 1);
    if (result == -1) {
        cout << length << endl;
    } else {
            cout << result << endl;
    }



    return 0;
}
