#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, K;
    cin >> N >> M >> K;

    vector<long long> H(N), B(M);

    for (int i = 0; i < N; i++) cin >> H[i];
    for (int i = 0; i < M; i++) cin >> B[i];

    sort(H.begin(), H.end());
    sort(B.begin(), B.end());

    int i = 0, j = 0;
    int robots = 0;

    while (i < N && j < M) {
        if (H[i] <= B[j]) {
            robots++;
            i++;
            j++;
            if (robots == K) {
                cout << "Yes\n";
                return 0;
            }
        } else {
            j++;
        }
    }

    cout << "No\n";
    return 0;
}
