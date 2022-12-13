#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    int deliver[3];
    int ans[3] = { 0,0,0 };
    cin >> a >> b >> c >> d;
    for (int i = 0; i < 3; i++)
    {
        cin >> deliver[i];
        int dog1 = deliver[i] % (a + b) ;
        int dog2 = deliver[i] % (c + d);
        if (dog1 <= a && dog1 != 0) ans[i]++;
        if (dog2 <= c && dog2 != 0) ans[i]++;
    }
    for (int i = 0; i < 3; i++)
        cout << ans[i] << '\n';
}
