#include <iostream>
using namespace std;
int main() {
    int a, b, t,c=0;
    cin >> t;
    while (t--)
    {
        c++;
        cin >> a >> b;
        cout << "Case " << c << ": " << a + b << '\n';
    }
}
