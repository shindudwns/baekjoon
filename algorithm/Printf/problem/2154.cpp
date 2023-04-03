#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int idx, n;
    string str="";
    cin>>n;
    for(int i=1;i<=n;i++) {
        str+=to_string(i);
    }

    idx=str.find(to_string(n));
    cout<<idx+1;
}
