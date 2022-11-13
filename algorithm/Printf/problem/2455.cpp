#include <iostream>
using namespace std;
 
int main() {
    int Max=0,sum=0;
    for (int i = 0; i < 4; i++) {
        int minus, plus;
        cin >> minus >> plus;
        sum += plus;
        sum -= minus;
        if (sum > Max) { Max = sum; }
    }
    cout << Max << '\n';
    return 0;
}
