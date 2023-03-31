#include <iostream>
#include <string> // string
#include <cctype> // isupper, islower
 
using namespace std;
 
int main() {
 
    string str;
    cin>>str;
 
    int b;
    int sum=0;
 
    // 풀이 1번
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        // 풀이 2번
        if(isupper(c)){
            b = int(c)-38;
        }
        // 풀이 3번
        else if(islower(c)){
            b = int(c)-96;
        }
        sum+=b;
    }
 
    int cnt=0;
 
    // 풀이 4번
    for(int j=1; j<=sum; j++){
        if(sum%j==0){
            cnt++;
        }
    }
 
    if(cnt==2||sum==1){ // 풀이 5번
 
        // 풀이 6번
        cout<<"It is a prime word.";
    }
 
    //풀이 7번
    else{
        cout<<"It is not a prime word.";
    }
 
    return 0;
}
 
