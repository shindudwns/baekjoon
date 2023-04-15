#include <bits/stdc++.h> 
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int N, Q;
    cin >> N >> Q;
    vector<bool> line(N, false);

    while (Q--) {
        int L, I;
        cin >> L >> I;
        for (int i = L - 1; i < N; i += I) 
            line[i] = true;
    }

    int ans = 0;
    for (auto it : line)
        if (it == false)
            ans++;

    cout << ans << '\n';
}
