#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < m; j++) cin >> b[j];

    long long left = 0, right = 2e9;
    long long answer = right;

    while (left <= right) {
        long long mid = (left + right) / 2;

        bool ok = true;
        int j = 0;

        for (int i = 0; i < n; i++) {
            while (j + 1 < m && abs(b[j + 1] - a[i]) <= abs(b[j] - a[i])) {
                j++;
            }

            if (abs(b[j] - a[i]) > mid) {
                ok = false;
                break;
            }
        }

        if (ok) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << answer << "\n";
    return 0;
}
