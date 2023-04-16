#include <iostream>
#include <string>
using namespace std;
string fa(string x)
{
    string tmp;\\주석 
    tmp = ((x[0])-'0' * x.size()) + '0';
    return tmp;
}//
int main() {
    string x;
    cin >> x;
    for (int i = 0; i < x.size(); i++)
    {
        x = fa(x);
    }
    if (x.size() == 1)
        cout << "FA" << '\n';
    else
        cout << "NFA" << '\n';
}
