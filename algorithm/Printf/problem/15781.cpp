#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int m, n;
    int a=0, b=0;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        int h;
        cin >> h;
        a = max(a, h);
    }
    for (int j = 0; j < n; j++)
    {
        int p;
        cin >> p;
        b = max(b, p);
    }
    cout << a + b << '\n';
}
