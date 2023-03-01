#include <iostream>
using namespace std;
int main() {
    int sam, sys;
    int ans;
    int samf = 0,sysf = 0;
 
    cin >> sam >> sys;
 
    while (sam--)
    {
        int s, man;
        cin >> s >> man;
        if (s != man)
            samf = 1;
        
    }
    while (sys--)
    {
        int s, man;
        cin >> s >> man;
        if (s != man)
            sysf = 1;
    }
    if (samf == 0 && sysf)
        cout << "Why Wrong!!!\n";
    else if (samf == 0 && sysf == 0)
        cout << "Accepted\n";
    else
        cout << "Wrong Answer\n";
}
