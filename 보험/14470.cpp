#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if (a < 0) //고기가 0도 미만 = 0도까지 올릴때 걸리는 시간 + 해동하는 시간 + b도까지 올리는 시간
        cout << -1 * a * c + d + e * b << '\n';
    else if (a > 0)//고기가 얼어 있지 않음
        cout << e * (b-a) << '\n';
    else//고기가 0도
        cout << d + e * b << '\n';
}
