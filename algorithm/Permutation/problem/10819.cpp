#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<map>
#include<algorithm>
#include<cmath>
#include<limits.h>
#define endl '\n'

using namespace std;

int n,mix=-INT_MAX;
vector<int> a;

int main(void) {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
	do {
		int x = 0;
		for (int i = 0; i < a.size() - 1; i++)
		{
			int y = abs(a[i] - a[i + 1]);
			x += y;
		}
		mix = max(mix, x);
	} while (next_permutation(a.begin(), a.end()));
	cout << mix;
}
