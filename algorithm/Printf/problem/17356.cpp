#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    float m, res;

    cin >> a >> b;

    m = (b - a);
    m /= 400;

    res = 1 / (1 + pow(10, m));

    cout << res;
    return 0;
}
