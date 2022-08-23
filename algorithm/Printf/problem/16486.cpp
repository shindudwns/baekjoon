#include <iostream>
#define PI 3.141592
using namespace std;
int main() {
    double d1, d2;
    cin >> d1 >> d2;
    printf("%.6f\n", d1 * 2 + 2 * PI * d2);
}
