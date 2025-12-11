#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    vector<int> breed(N+1);
    vector<int> prefix1(N+1, 0), prefix2(N+1, 0), prefix3(N+1, 0);

    for(int i=1; i<=N; i++){
        cin >> breed[i];
        prefix1[i] = prefix1[i-1] + (breed[i]==1);
        prefix2[i] = prefix2[i-1] + (breed[i]==2);
        prefix3[i] = prefix3[i-1] + (breed[i]==3);
    }

    while(Q--){
        int a, b;
        cin >> a >> b;
        int c1 = prefix1[b] - prefix1[a-1];
        int c2 = prefix2[b] - prefix2[a-1];
        int c3 = prefix3[b] - prefix3[a-1];
        cout << c1 << " " << c2 << " " << c3 << "\n";
    }
}
