#include<iostream>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std;
long long n,city[10][10],cost[10],mix= INT_MAX;
bool visit[10];

void bfs(int j, int stac) {
	visit[0] = true;
	if (stac == n-1) {
		long long sum = 0; cost[n - 1] = city[j][0]; int a = 0;
		for (int i = 0; i < n; i++)
		{
			if (cost[i] == 0)a = 1;
			sum += cost[i];
		}
		if(a==0)mix=min(mix, sum);
		return;
	}
	for (int i = 0; i < n; i++) {
		if (visit[i]) continue;
			visit[i] = true;
			cost[stac] = city[j][i];
			bfs(i, stac + 1);
			visit[i] = false;
	}
}
int main(void) {

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> city[i][j];
		}
	}
	bfs(0,0);
	cout << mix;
}
