#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		char c = s[i];
		if ('a' <= c && c <= 'z') {
			s[i] = s[i] - 32;
		}
		else {
			s[i] = s[i] + 32;
		}
	}
	cout << s << '\n';

	return 0;
}
