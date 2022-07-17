#include <iostream>
using namespace std;
int ans[4][7];
int tmp[4];
int main() {
    int t[4][7];
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            cin >> t[i][j];
        }
    }
    for (int i = 1; i <= 3; i++){
        //출근시간과 퇴근시간을 모두 초단위로 바꾼뒤 그 차이를 저장 후 다시 시간 분 초 순으로 변환하며 
        tmp[i] = (t[i][4] * 3600 + t[i][5] * 60 + t[i][6]) - (t[i][1] * 3600 + t[i][2] * 60 + t[i][3]);
        cout << tmp[i]/3600 << ' ';
        tmp[i] %= 3600;
        cout << tmp[i] /60 << ' ';
        tmp[i] %= 60;
        cout << tmp[i] << '\n';
    }
}
