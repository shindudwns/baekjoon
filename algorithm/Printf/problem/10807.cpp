#include <iostream>
using namespace std;
 
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
 
	int N, num, v;
	int arr[201] = {};
	cin >> N;
 
	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[num + 100]++;
	}
	cin >> v;
	cout << arr[v + 100];
 
	return 0;
}
