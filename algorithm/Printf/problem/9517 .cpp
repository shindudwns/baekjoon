#include <iostream>
using namespace std;
int main() {
    int k,q;
    int time = 0;
    cin >> k >> q;
    while(q--)
    {
        int t;
        char ans;
        cin >> t >> ans;
        time += t;
        if (time >= 210)//3분 30초 경과 펑!
        {
            cout << k;
            break;
        }
        if (ans == 'T')//답을 맞췄을 경우 왼쪽 사람에게 토스
        {
            k++;
            if (k == 9) k = 1;
        }
    }
}
