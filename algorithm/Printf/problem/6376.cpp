#include<stdio.h>

double factorial(int n)
{
	if (n <= 1) return 1;
	
	return n * factorial(n - 1);
}

double exponential(int n)
{
	double ans = 1;

	if (n == 0) return 0;
	else
	{
		for (int i = 1; i <= n; i++)
		{
			ans += double(1 / factorial(i));
		}
		return ans;
	}
}

int main(void)
{
	printf("n e\n");
	printf("- -----------\n");
	printf("0 1\n");
	printf("1 2\n");
	printf("2 2.5\n");
	for (int i = 3; i < 10; i++)
	{
		printf("%d %.9f\n", i, exponential(i));
	}
}
