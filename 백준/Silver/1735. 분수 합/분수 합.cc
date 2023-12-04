#include <iostream>

using namespace std;

int gcd(int x, int y) {
    int r = x % y;
    return r ? gcd(y, r) : y;
}

int main() {
    int a1 = 0;
    int a2 = 0;
    int b1 = 0;
    int b2 = 0;
    int sum1 = 0;
    int sum2 = 0;
    int igcd = 0;

    cin >> a1 >> a2 >> b1 >> b2;

    sum1 = a1 * b2 + b1 * a2;
    sum2 = a2 * b2;
    // cout << sum1 << " " << sum2;

    igcd = gcd(sum1, sum2);

    // cout << igcd;
    sum1 /= igcd;
    sum2 /= igcd;

    cout << sum1 << " " << sum2;
    return 0;
}