#include <iostream>
using namespace std;
int main() {
    int T,s,n,q,p,sum = 0;
    cin >> T;
    for (int k = 0; k < T; k++)
    {
        cin >> s >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> q >> p;
            sum += p*q;
        }
        cout << sum + s << '\n';
        sum = 0;
    }
}
