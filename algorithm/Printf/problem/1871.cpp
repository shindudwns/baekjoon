#include <iostream>
#include <string>
#include <algorithm>    // find
#include <cmath>        // abs(절댓값)
 
using namespace std;
 
int main() {
 
    int test;
    cin>>test;
 
    for(int i=0; i<test; i++){
        string str;
        cin>>str;
 
        // 문제 풀이 1번
        int sever = str.find('-');              // 문자열에서 '-'를 찾으면
 
        // 문제 풀이 2번
        string str1 = (str.substr(0,sever));    // -를 기준으로 쪼갠다.
        int bi = stoi(str.substr(sever+1));
 
        int a, sum=0;
        double b;
 
        int len = str1.length();
 
        for(int i=0; i<len; i++){
            char c = str1[i];   
            // 문제 풀이 3번
            a = int(c) - 65;  
            // if(c==소문자) -97                   
            b = a * pow(26, len-i-1);
            sum+=b;
        }
 
        // 문제 풀이 4번
        int num = abs(sum-bi);
 
 
        // 문제 풀이 5번
        if(num<=100){
            cout<<"nice\n";
        }
        else{
            cout<<"not nice\n";
        }
    }
    return 0;
}
