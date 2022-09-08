#include<iostream>
using namespace std;

int main(){
    int t, tmp, ans = 0;
    cin>>t;
    for(int i = 0; i < 5; i++){
        cin>>tmp;
        if(t == tmp)
            ans += 1;
    }
    cout<<ans;
    return 0;
}
