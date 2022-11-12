#include <iostream>
using namespace std;

int main()
{
	int n;

	cin >> n;

	if (n < 1 || n > 100)
		return 0;
	

	for (int i = 0; i < n; i++)  // 1부터 n 줄까지 반복 
	{
		for (int j = 0; j < i; j++)  //  i개의 공백
		{
			cout << " ";
		}

		for (int k = n - i; k > 0; k--)  // n-i개의 별 
		{
			cout << "*";
		}
		
		cout << endl;
	}

	return 0;
}
