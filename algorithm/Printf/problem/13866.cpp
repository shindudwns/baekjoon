#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int f[4];
    int a=0, b=0;
    for (int i = 0; i < 4; i++)
    {
        cin >> f[i];
    }
    //abs()는 안의 인자의 절대값을 반환한다.
    cout << abs(f[0] + f[3] - f[1] - f[2]);
}
