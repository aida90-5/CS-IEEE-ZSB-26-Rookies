#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    unordered_map<long long, int> mp;
    mp.reserve(200000);
    mp.max_load_factor(0.7);

    for (int i = 1; i <= n; i++) {
        long long a;
        cin >> a;

        long long need = x - a;

        if (mp.count(need)) {
            cout << mp[need] << " " << i;
            return 0;
        }

        mp[a] = i;
    }

    cout << "IMPOSSIBLE";
    return 0;
}

