#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
#include<cmath>
#include<limits.h>

#define endl '\n'

using namespace std;

int main(void) {
	int n,stac=0;
	cin >> n;
	int y; cin >> y;
	stac = y;
	for (int i = 1; i < n; i++) {
		int x; cin >> x;
		if (x > 1)stac += x - 1;
	}
	cout << stac;
}
