#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    int m = 0;

    vector<string> c1 = {
        "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW",
        "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW",
    };
    vector<string> c2 = {"BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB",
                         "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB"};
    int answer = 64;
    int cnt = 0;
    int cnt2 = 0;

    cin >> n >> m;
    vector<string> board(n); // m * n 보드

    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }

    // for (int i = 0; i < m; i++) {
    //     cout << board[i] << "\n";
    // }

    for (int x = 0; x <= m - 8; x++) {
        for (int y = 0; y <= n - 8; y++) {
            // cout << "x y: " << x << " " << y << "\n";
            for (int i = x; i < x + 8; i++) {
                for (int j = y; j < y + 8; j++) {
                    if (board[j][i] != c1[j - y][i - x]) {
                        // cout << "x y " << i - x << " " << j - y << "\n";
                        //   cout << board[i][j] << c1[i - x][j - y] << "\n";
                        //    board[i][j] = c1[i - x][j - y];
                        cnt++;
                    }
                    if (board[j][i] != c2[j - y][i - x]) {
                        // cout << "2x y " << i - x << " " << j - y << "\n";
                        //  cout << board[i][j] << c1[i - x][j - y] << "\n";
                        //   board[i][j] = c1[i - x][j - y];
                        cnt2++;
                    }
                }
            }
            // cout << "cnt cnt2 " << cnt << " " << cnt2 << "\n";
            answer = min({answer, cnt, cnt2});
            cnt = 0;
            cnt2 = 0;
        }
        cnt = 0;
        cnt2 = 0;
    }

    cout << answer;
    return 0;
}