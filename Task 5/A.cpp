#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> a(N);
    long long total = 0;
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
        total ^= a[i];
    }
    for (int i = 0; i < N; ++i) {
        cout << (total ^ a[i]) << " ";
    }
    cout << endl;
    return 0;
}
