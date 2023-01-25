#include <iostream>
using namespace std;
int main() {
    int n, k, sum = 0;
    cin >> n >> k;
    while (k--)
    {
        int mul;
        cin >> mul;
        if (mul % 2 == 0)
            sum += mul / 2;
        else
            sum += mul / 2 + 1;
 
    }
    if (sum >= n) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}
