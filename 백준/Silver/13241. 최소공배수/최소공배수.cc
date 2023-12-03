#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int gcd(long long int a, long long int b) {
    // cout << "!";
    int r = 0;
    if (a > b) {
        // cout << a << " > " << b << "\n";
        r = a % b;
        if (r == 0) {
            return b;
        } else {
            return gcd(b, r);
        }
    } else {
        // cout << "2";
        r = b % a;
        if (r == 0) {
            return a;
        } else {
            return gcd(a, r);
        }
    }
    // cout << "??";
    //  return 1;
}

int main() {
    long long int a = 0;
    long long int b = 0;
    long long int answer = 0;

    cin >> a >> b;

    answer = (a * b) / gcd(a, b);

    cout << answer << '\n';

    return 0;
}