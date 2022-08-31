#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int ans[4];
    int press = 1000000;
    int sum = 0;
    int index = 0;
    for (int i = 1; i <= 3; i++)
    {
        cin >> ans[i];
        if (press > ans[i])
        {
            press = ans[i];
            index = i;
        }
        sum += ans[i];
    }
    if (sum >= 100)
    {
        cout << "OK" << '\n';
    }
    else
    {
        switch (index)
        {
            case 1:
                cout << "Soongsil" << '\n';
                break;
            case 2:
                cout << "Korea" << '\n';
                break;
            case 3:
                cout << "Hanyang";
                break;
        }
    }
}
