#include <iostream>
using namespace std;
int main() {
    double K, N, M;
    cin >> K >> N >> M;
    if (K*N > M)
        cout << K*N - M << '\n';
    else
        cout << "0" << '\n';
}
