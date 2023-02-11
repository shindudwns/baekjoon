#include <bits/stdc++.h>
using namespace std;
#include <cmath>
#define PI 3.141592653589793
#define ll long long
 
 
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int t;
	cin >> t;
	while(t--)
	{
		ll a, b, c;
		cin >> a >> b >> c;
		ll big = max(a, b);
		ll mbig = max(big, c);
		ll sum;
		if (mbig == a)
		{
			sum = b+c;
		}
		else if (mbig == b)
		{
			sum = a+c;
		}
		else
		{
			sum = a+b;
		}
		cout << mbig*mbig + sum*sum << '\n';
 
	}
}
