#include <iostream>
#include <string>
using namespace std;
int main() {
    string n,num ="";
    getline(cin, n);
    int ans = 0;
 
    for (int i = 0; i < n.size(); i++)
    {
        num += n[i];
 
        if (n[i] == ' ')
        {
            if (stoi(num) > 0)
                ans++;
            num = "";
        }
        if (i == n.size() - 1)
        {
            if (stoi(num) > 0)
                ans++;
        }
    }
    cout << ans << '\n';
}
