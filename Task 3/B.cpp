#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int q;
    cin >> q;

    vector<int> answers;

    while (q--) {
        long long m;
        cin >> m;

        int cnt = upper_bound(prices.begin(), prices.end(), m) - prices.begin();
        answers.push_back(cnt);
    }

    for (int x : answers) {
        cout << x << '\n';
    }

    return 0;
}
