#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b,c;
    cin>>a>>b>>c;
 
    if(a==60&&b==60&&c==60){ // 세 각의 크기가 모두 60
        cout<<"Equilateral";
    }
 
    else if(a+b+c==180){ // 세 각의 합 = 180
        if(a==b||a==c||b==c){ // 두 각이 같을 때
            cout<<"Isosceles";
        }
        else if(a!=b||a!=c||b!=c){ // 세 각이 다 다를때
            cout<<"Scalene";
        }
    }
 
    else { // 위의 조건이 다 성립하지 않을 때
        cout<<"Error";
    }
 
    return 0;
}
