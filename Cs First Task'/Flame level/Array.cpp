#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    stack<pair<int,int>> st;
    vector<int> result(n);

    for(int i = 0; i < n; i++) {
        while(!st.empty() && st.top().first >= arr[i]) {
            st.pop();
        }
        if(st.empty()) result[i] = 0;
        else result[i] = st.top().second + 1;
        st.push({arr[i], i});
    }

    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
}
