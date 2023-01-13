#include <iostream>
using namespace std;
int ques, s, t, class_time;
int main() {
    cin >> ques;
    while (ques--)
    {
        s = 0, t = 0;
        int ans = 0;
        cin >> class_time;
        while (1)
        {
            if (class_time < s + t) { t--; break; }
            t++;
            s = t * t;
        }
        cout << t << '\n';
    }
}
