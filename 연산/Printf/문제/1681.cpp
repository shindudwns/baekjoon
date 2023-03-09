#include <iostream>
#include <string>

using namespace std;
int main() {
	int n, num = 0;
	char l;

	cin >> n >> l;

	//1부터 10 까지
	for (int i = 0; i < n; ++i)
		// 매 숫자마자 ㅣ이 포함되어있는지 찾고 아닌 경우 npos 반환
		while (to_string(++num).find(l) != string::npos);

	cout << num << endl;

	return 0;
}
