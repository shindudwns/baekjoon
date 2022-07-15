#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int l, a, b, c, d,homeworkday;

	cin >> l >> a >> b >> c >> d;
	if (a%c == 0)
		homeworkday = a / c;
	else
		homeworkday = a / c + 1;

	if(b%d==0)
		homeworkday = max(homeworkday,b/d);
	else
		homeworkday = max(homeworkday, b/d+1);

	cout << l - homeworkday << endl;
	return 0;
}
