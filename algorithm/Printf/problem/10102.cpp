#include <iostream>
#include <string>
using namespace std;
int main() {
    int v,a=0,b=0;
    string k;
    cin >> v >> k;
    for (int i = 0; i < v; i++)
    {
        if (k[i] == 'A')
            a++;
        else
            b++;
    }
    if (a == b) { cout << "Tie" << '\n';}
    else
        printf("%c\n", a < b ? 'B' : 'A');
}
