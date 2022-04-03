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
	int n,mux,mux2,stac=0,mun=0;
	bool go = true;
	cin >> n;
	int dp[100001] , a[100001];
	cin >> a[1]; dp[1] = a[1]; mux = a[1]; mux2 = a[1];
	for (int i = 2; i <= n; i++) {
		cin >> a[i];
		if (a[i] > 0) {
			stac = 0; mun = 0; 
			if(go)
			{
				mux2 += a[i];
				dp[i] = max(mux, mux2,mux2+mun+mux);
			}
			else {
				go = true;
				dp[i] = max(mux, a[i]);
				mux2 = a[i];
			}
		}
		else { dp[i] = dp[i - 1]; go = false; mux2 = 0; mux = dp[i-1]; stac++; mun += a[i]; }/*
		cout << endl << "DP =" << dp[i] << endl;*/
	}
	cout << dp[n];
	
}
