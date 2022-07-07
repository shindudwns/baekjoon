#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int X, N; cin >> X >> N;
	while (N--) {
		int a, b; cin >> a >> b;
		X -= a * b;
	}

	if (X) cout << "No";
	else cout << "Yes";
}
