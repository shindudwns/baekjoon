#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    if (m <= 2)
        cout<<"NEWBIE!";
    else if (n < m)
        cout<<"TLE!";
    else
        cout<<"OLDBIE!";
    return 0;
}
