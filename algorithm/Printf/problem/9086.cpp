#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int n;
    cin >> n;
    while (n--) {
        cin >> s;
        int end = s.size();
        cout << s[0] << s[end - 1] << '\n';
    }
}
