#include<iostream>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>
#include<limits.h>
q
using namespace std;

int n, k;
int st = 0;
long long dp[201][201];

void DP() {
    for (int i = 0; i <= n; i++)
    {
        dp[1][i] = 1;
    }

    for (int l = 2; l <= k; l++)
    {
        for (int j = 0; j <= n; j++)
        {
            for (int i = 0; i <= j; i++)
            {
                dp[l][j] = dp[l][j] + dp[l - 1][i];
            }
            dp[l][j] %= 1000000000;
        }
    }
}

int main(void) {

	cin >> n >> k;
    DP();
    cout << dp[k][n] << endl;
}
