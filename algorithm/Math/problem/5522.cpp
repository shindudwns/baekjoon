#include <iostream>

using namespace std;

int main() {
	
	int sum=0;
	int input;
	for(int i=0; i<5; i++) {
		cin >> input;
		sum+=input;
	}
	
	cout << sum;
	
	return 0;
}
