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
	int n, mux, mux2;
	bool go = true;
	cin >> n;
	int dp[100001], a[100001];
	cin >> a[1]; dp[1] = a[1]; mux = a[1]; mux2 = a[1];
	for (int i = 2; i <= n; i++) {
		cin >> a[i];
		dp[i] = max(dp[i - 1] + a[i], a[i]);
		if (mux < dp[i])mux = dp[i];
	}
	cout <<mux;

}



