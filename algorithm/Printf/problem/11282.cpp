#include <iostream>
#include <string>
using namespace std;

int main(void){
	int N; // 입력으로 주어지는 숫자 (1-Based)
	string S; // 출력되는 한글 (UTF-8 : 3Byte)
	cin>>N;
	N+=3071; // 1-Based를 0-Based로 변환
	S.push_back(N/4096+234);
	S.push_back(N/64%64+128);
	S.push_back(N%64+128);
	cout<<S;
	return 0;
}
