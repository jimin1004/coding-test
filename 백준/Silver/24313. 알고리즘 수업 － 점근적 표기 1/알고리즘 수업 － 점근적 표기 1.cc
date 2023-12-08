#include <iostream>

using namespace std;

int main() {
    int a1 = 0;
    int a0 = 0;
    int c = 0;  // 1<=c<=100
    int n0 = 0; // 1 <= n0 <= 100
    int answer = 0;

    cin >> a1 >> a0 >> c >> n0;

    if (a1 > 0) {
        if (a1 == c && a0 <= 0) {
            answer = 1;
        } else if (a1 >= c) {
            answer = 0;
        } else if (a1 * n0 + a0 <= c * n0) {
            answer = 1;
        }
    } else if (a1 < 0) {
        if ((a0 * (-1)) / (a1 - c) <= n0) {
            answer = 1;
        }
    } else {
        if (n0 >= a0 / c) {
            answer = 1;
        }
    }

    cout << answer;
    return 0;
}