#include <bits/stdc++.h>
using namespace std;

long long n;
int k;

bool can(long long v) {
    long long sum = 0;
    long long current = v;

    while (current > 0) {
        sum += current;
        current /= k;
    }

    return sum >= n;
}

int main() {
    cin >> n >> k;

    long long left = 1, right = n, answer = n;

    while (left <= right) {
        long long mid = (left + right) / 2;

        if (can(mid)) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << answer << endl;
    return 0;
}
