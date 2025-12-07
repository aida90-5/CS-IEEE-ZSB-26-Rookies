#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int arr[t];

    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < t; i++) {
        int rating = arr[i];

        if (rating >= 1900)
            cout << "Division 1\n";
        else if (rating >= 1600)
            cout << "Division 2\n";
        else if (rating >= 1400)
            cout << "Division 3\n";
        else
            cout << "Division 4\n";
    }

    return 0;
}

