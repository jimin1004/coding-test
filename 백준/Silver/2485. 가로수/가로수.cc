#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int gcd(int x, int y) {
    int r = 0;
    r = x % y;
    return r ? gcd(y, r) : y;
}

int main() {
    vector<int> v;
    int cnt = 0;
    int d = 0; // gcd
    int N = 0;
    int tree = 0;

    cin >> N;

    for (int i = 0; i < N; i++) { // 현재 가로수 위치 저장
        int temp = 0;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());
    d = v[1] - v[0];
    for (int i = 2; i < N; i++) { // 가로수 최소 간격 구하기
        int temp = 0;
        temp = v[i] - v[i - 1];
        d = gcd(d, temp);
        // cout << d << "\n";
    }

    tree = v.front() + d;

    for (int i = 1; i < N; i++) { // 현재 가로수 위치 저장
        while (tree < v[i] && tree > v[i - 1]) {
            cnt++;
            tree += d;
        }
        tree += d;
    }

    cout << cnt;

    return 0;
}