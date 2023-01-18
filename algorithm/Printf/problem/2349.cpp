#include <stdio.h>
#include <stdlib.h>
#include <stack>
using namespace std;
int main(){
    int K,n;
    scanf("%d", &K);
 
    stack<int> s;
    for(int i=0; i<K; i++){
        scanf("%d",&n);
        if (n)
            s.push(n);
        else
            s.pop();
    }
 
    int sum=0;
    while (!s.empty()){
        sum += s.top();
        s.pop();
    }
    printf("%d\n",sum);
  
}
