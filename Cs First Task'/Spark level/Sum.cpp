#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[t][3];

    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < t; i++)
    {
        int a = arr[i][0];
        int b = arr[i][1];
        int c = arr[i][2];

        if (a + b == c || a + c == b || b + c == a)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
