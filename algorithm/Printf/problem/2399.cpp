#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int32_t N;
        cin >> N;
        int64_t data[N];
        int64_t sum = 0;
        for(int i=0; i<N; i++) cin >> data[i];
        sort(data, data+N);

        for(int i=0; i<N; i++) {
                sum += data[i] * ( 2 * i - N + 1 );
        }
        cout << sum * 2;
}
