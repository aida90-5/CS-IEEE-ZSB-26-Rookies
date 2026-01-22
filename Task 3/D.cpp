#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long t;
    cin >> n >> t;

    vector<long long> k(n);
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }

    long long left = 0;
    long long right = (*min_element(k.begin(), k.end())) * t;
    long long answer = right;

    while (left <= right) {
        long long mid = (left + right) / 2;

        long long products = 0;
        for (int i = 0; i < n; i++) {
            products += mid / k[i];
            if (products >= t) break;
        }

        if (products >= t) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << answer << "\n";
    return 0;
}
