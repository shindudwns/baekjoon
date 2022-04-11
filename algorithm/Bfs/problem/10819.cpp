#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<map>
#include<algorithm>
#include<cmath>
#include<limits.h>

#define endl '\n'
	int n,a[8],b[8],mix= -INT_MAX;
	bool visit[8] = {0,};
using namespace std;
void bfs(int stac) {
	if (stac == n) {
		int x=0;
		for (int i = 0; i < n-1; i++) {
			x+= abs(b[i] - b[i + 1]);
		}
		mix=max(mix, x);
	}
	for (int i = 0; i < n; i++) {
		if (visit[i])continue;

		visit[i] = true;
		b[stac] = a[i];
		bfs(stac + 1);
		visit[i] = false;
	}

}

int main(void) {

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bfs(0);
	cout << mix;
}
