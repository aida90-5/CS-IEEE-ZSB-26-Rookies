#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> v(n+1), prefixV(n+1), prefixU(n+1), u(n+1);

    for(int i = 1; i <= n; i++) cin >> v[i];

    for(int i = 1; i <= n; i++) {
        prefixV[i] = prefixV[i-1] + v[i];
        u[i] = v[i];
    }

    sort(u.begin()+1, u.end());

    for(int i = 1; i <= n; i++)
        prefixU[i] = prefixU[i-1] + u[i];

    int m;
    cin >> m;

    while(m--) {
        int type, l, r;
        cin >> type >> l >> r;
        if(type == 1)
            cout << prefixV[r] - prefixV[l-1] << "\n";
        else
            cout << prefixU[r] - prefixU[l-1] << "\n";
    }
}
