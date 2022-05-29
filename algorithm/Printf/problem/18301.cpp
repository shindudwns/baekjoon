#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
double n1, n2, n12, ans;
//n := ⌊(n1 + 1)(n2 + 1)/(n12 + 1) - 1⌋
void input() {
    cin >> n1 >> n2 >> n12;
}
void sol() {
    input();
    ans = ((n1 + 1)*(n2 + 1) / (n12 + 1)) - 1;
    cout << floor(ans);//내림하는 함수입니다.
}
int main() {
    sol();
}
