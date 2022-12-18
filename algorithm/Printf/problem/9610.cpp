#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;

	int ans[5] = {}; // 출력값 저장할 배열

	int x, y;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;

		if (x > 0 && y > 0) ans[0]++;
		else if (x < 0 && y > 0) ans[1]++;
		else if (x < 0 && y < 0) ans[2]++;
		else if (x > 0 && y < 0) ans[3]++;
		else ans[4]++;
		
	}
	for (int i = 0; i < 4; i++) {
		cout << "Q" << i+1 << ": " << ans[i] << "\n";
	}
	cout << "AXIS: " << ans[4] << "\n";

}
