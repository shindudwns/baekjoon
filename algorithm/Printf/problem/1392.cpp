#include <iostream>
#include <algorithm>

using namespace std;

#define endl '\n'
#define len(x) (int)(x).length()
#define size(x) (int)(x).size()

// Set up : Global Variables
/* None */

// Set up : Functions Declaration
/* None */


int main()
{
    // Set up : I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Set up : Input
    int N, Q;
    cin >> N >> Q;
    int A[N+1]; A[0] = 0;
    for (int i=1; i<=N; i++)
        cin >> A[i];

    // Process
    for (int i=1; i<=N; i++) {
        A[i] += A[i-1];
    }

    // Control : Output
    for (int i=0; i<Q; i++) {
        int q; cin >> q;
        cout << distance(A, upper_bound(A, A+(N+1), q)) << endl;
    }
}
