#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "NO" << endl;
        return 0;
    }

    if (n == 3) {
        cout << "YES" << endl;
        cout << 2 << endl;
        cout << "1 2" << endl;
        cout << 1 << endl;
        cout << 3 << endl;
        return 0;
    }

    long long total_sum = 0;
    for (long long i = 0; i < n+1; i++) {
        total_sum += i;
    }
    if (total_sum % 2 == 1) {
        cout << "NO" <<endl;
        return 0;
    }

    cout << "YES" << endl;
    long long target = total_sum / 2;
    long long start = 1;
    long long end = n;
    long long pairwise_sum = 1 + n;
    int iters = target / pairwise_sum;
    int extra = target % pairwise_sum;

    vector<long long> one_bucket;
    while (iters--) {
        one_bucket.push_back(start);
        one_bucket.push_back(end);
        start++;
        end--;
    }

    if (extra) {
        one_bucket.push_back(extra);
    }

    int m = one_bucket.size();

    cout << m<< endl;
    for (int i = 0; i <  m -1;i++) {
        cout << one_bucket[i] << " ";
    }
    cout << one_bucket[m-1]  << endl;

    cout << n - m << endl;
    for (long long i = start; i < end; i++) {
        if (i == extra) continue;
        cout << i << " ";
    }
    if (end != extra)     cout << end << endl;

    return 0;
}
