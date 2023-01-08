#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    int result = 0;
    cin >> n;
    while (n--) {
        int plus;
        cin >> plus;
        result += plus;
    }
    cout << result << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
