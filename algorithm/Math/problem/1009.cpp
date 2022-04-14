#include <iostream>
#include <cmath>
#define ll long long 
using namespace std;
//1의 자리만 보면 된다.
//모든 1의 자리는 공통적으로 지수 4를 주기로 하여 순환한다.
//예를 들어 2의 1승은 2, 2의 2승은 4, 2의 3승은 8, 2의 4승은 2 ....2,4,8,2....
//3의 1승은 3, 3의 2승은 9, 3의 3승은 7, 3의 4승은 1... 3,9,7,1,....
int main() {
    ll t,a,b,ans;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        ans = a;
        if(b%4==0) b = 4;
        else b %= 4;
        //pow함수는 a의 b제곱을 double형으로 반환
        ans = pow(a, b);
        if(ans%10 == 0) cout << 10 << '\n';
        else cout << ans % 10 << '\n';
    }
}
