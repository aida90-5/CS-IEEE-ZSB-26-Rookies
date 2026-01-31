#include <iostream>
using namespace std;

int main() {
    int X, N, Q;
    cin >> X >> N;

    int W[N + 1];
    bool attached[N + 1] = {false};

    for (int i = 1; i <= N; i++) {
        cin >> W[i];
    }

    cin >> Q;
    int current_weight = X;

    for (int i = 0; i < Q; i++) {
        int P;
        cin >> P;

        if (!attached[P]) {
            current_weight += W[P];
            attached[P] = true;
        } else {
            current_weight -= W[P];
            attached[P] = false;
        }

        cout << current_weight << endl;
    }

    return 0;
}
