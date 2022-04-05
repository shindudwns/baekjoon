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
	char ches[8][8] = { 0, };
	int stac=0,st = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> ches[i][j];
			if (ches[i][j] == 'F')
			{
				if (i % 2==0 && j%2==0) {
					stac++;
				}
				else if(i % 2==1 && j % 2==1) {
					stac++;
				}
			}
		}
	}
	cout << stac;
}
