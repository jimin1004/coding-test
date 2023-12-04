#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    int answer = 0;

    for (int i = 1; i <= n; i++) {
        if (i * i <= n) {
            answer++;
        } else
            break;
    }

    cout << answer;

    return 0;
}