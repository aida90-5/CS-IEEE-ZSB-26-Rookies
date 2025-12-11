#include <bits/stdc++.h>
using namespace std;
int gcd(int x,int y)
{
    if(y==0) return x;
    else return gcd(y,x%y);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<long long> A(N+1), prefix(N+2), suffix(N+2);

    for(int i = 1; i <= N; i++)
        cin >> A[i];

    for(int i = 1; i <= N; i++)
        prefix[i] = gcd(prefix[i-1], A[i]);

    for(int i = N; i >= 1; i--)
        suffix[i] = gcd(suffix[i+1], A[i]);

    long long ans = 0;
     for(int i = 1; i <= N; i++) {
        long long g = gcd(prefix[i-1], suffix[i+1]);
        ans = max(ans, g);
    }

    cout << ans;
}
