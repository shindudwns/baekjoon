#include <iostream>
using namespace std;

int main(void)
{
	int P;
	cin >> P;

	for (int p = 1;p <= P; p++)
	{
		int N;
		double D, A, B, F;
		cin >> N >> D >> A >> B >> F;

		double duration = D / (A + B);
		double result = F * duration;

		printf("%d %.3lf\n", N, result);
	}

	return 0;
}
