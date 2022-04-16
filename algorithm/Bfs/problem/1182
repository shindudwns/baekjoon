#include<iostream>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>
#include<limits.h>
	long long n, s,st=0;
	long long a[20];

using namespace std;

void bfs(long long sum,int stac) {
	if (sum == s && stac!=0)
	{
		st++;
	}
	if (stac == n)return;

	for (int i = stac; i < n; i++) {
		bfs(sum+a[i],i+1);
	}
}

int main(void) {

	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bfs(0,0);
	cout << st;
}
