#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int n[1000];
    int cnt = 0;
    for (int i = 1; cnt<1000 ;i++) {
        for (int j = 0; j < i; j++) {
            n[cnt++] = i; //cnt는 for문과 상관없이 이 줄이 끝나면 1씩 증가
            if (cnt == 1000) //n배열을 다 채우면 break;
                break;
        }
    }
    int sum = 0;
    for (int i = a-1; i <= b-1; i++) { //a번째는 n[a-1]값이고, b번째는 n[b-1]값 이므로
        sum += n[i];
    }
    cout << sum << endl;
    return 0;
}
