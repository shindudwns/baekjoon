#include <iostream>
using namespace std;

int finger[8] = {1,2,3,4,5,4,3,2};

int main() {
  cin.tie(NULL); cout.tie(NULL);
  ios::sync_with_stdio(false);
  
  int n;
  cin >> n;

  cout << finger[(n-1)%8];
}
