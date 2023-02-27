#include <iostream>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    int arr[50] = { 0 };
    for (int i = 0; i < N; i++) { cin >> arr[i]; }
 
    int cnt = 1;
    int largest = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] > largest) {
            cnt++;
            largest = arr[i];
        }
    }
    cout << cnt << endl;
 
    cnt = 1;
    largest = arr[N - 1];
    for (int i = N - 1; i >= 0; i--) {
        if (arr[i] > largest) {
            cnt++;
            largest = arr[i];
        }
    }
    cout << cnt;
}
