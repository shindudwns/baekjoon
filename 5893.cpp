#include <bits/stdc++.h>
 
#define all(x) (x).begin(), (x).end()
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string u, v, ans;
    cin >> u;
    v = u;
    u += "0000";
    int c = 0;
    while (!v.empty()) {
        int val = u.back() + v.back() - 48 * 2 + c;
        c = val / 2;
        ans += to_string(val % 2);
        u.pop_back();
        v.pop_back();
    }
    while (!u.empty()) {
        int val = u.back() - 48 + c;
        c = val / 2;
        ans += to_string(val % 2);
        u.pop_back();
    }
    if (c) ans += "1";
    reverse(all(ans));
    cout << ans;
}
