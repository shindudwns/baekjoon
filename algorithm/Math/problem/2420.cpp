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
	long long n, m;
	cin >> n >> m;
	if (n > m)cout << n - m;
	else cout << m - n;
}
