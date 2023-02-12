#include <iostream>
#include <algorithm>

using namespace std;

int n, k;
int arr[1001];

int main() {
    cin >> n >> k;        
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    cout << arr[n-k] << '\n';
}
