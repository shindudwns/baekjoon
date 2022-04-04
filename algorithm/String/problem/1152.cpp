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
	string a;
	int stac = 1;
	getline(cin, a);
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == ' ')stac++;
	}		
	if (a[0] == ' '  )stac--;
	if(a[ a.size() - 1]==' ')stac--;
	cout << stac;
}
