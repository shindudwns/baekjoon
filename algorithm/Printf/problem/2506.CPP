#include <iostream>
using namespace std;

int main() {
	int n, score = 0, res[100], bonus = 0;
	cin >> n;

	for (int i = 1; i < n + 1; i++) {
		cin >> res[i];
		if (res[i] == 1) { // 정답이면, 1점 추가
			score++;
			if (res[i - 1] == 1) { // 정답이면서, 이전 문제도 정답이면, 가산점에 1점 추가
				bonus++;
				score += bonus; // 총 점수에 가산점을 더함.
			} else {
				bonus = 0;
			}
		}
	}
	cout << score;

	return 0;
}
