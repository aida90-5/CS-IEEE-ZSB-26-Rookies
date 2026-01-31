#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n+1), prefix(n+1, 0);
        long long total = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            total += a[i];
            prefix[i] = prefix[i-1] + a[i];
        }

        while (q--) {
            int l, r;
            long long k;
            cin >> l >> r >> k;
            long long old_sum = prefix[r] - prefix[l-1];
            long long len = r - l + 1;
            long long new_total = total - old_sum + len * k;
            cout << (new_total % 2 ? "YES\n" : "NO\n");
        }
    }
    return 0;
}

