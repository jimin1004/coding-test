#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    pair<int, int> point[100];
    int area = 0;
    int map[100][100] = {};

    cin >> n;

    // map에서 해당 하는 색종이 영역 1로 색칠하기
    for (int i = 0; i < n; i++)
    {
        cin >> point[i].first >> point[i].second;

        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                map[point[i].first + j][point[i].second + k] = 1;
            }
        }
    }

    // 색칠한 영역 세기
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            // cout << map[i][j];
            if (map[i][j] == 1)
            {
                area++;
            }
        }
    }

    cout << area;

    return 0;
}