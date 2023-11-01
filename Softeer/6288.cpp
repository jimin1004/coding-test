// Softeer 6288. 금고털이
// Lv. 2

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
    int w, n = 0;
    int result = 0;
    scanf("%d %d", &w, &n);
    vector<pair<int, int>> v(n); // {가격, 무게}

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &v[i].second, &v[i].first); // 가격, 무게 순으로 pair 저장
    }

    sort(v.begin(), v.end(), greater<>()); // pair의 첫번째 요소 기준 내림 차순 정렬

    int w_temp = w;
    for (int i = 0; i < n; i++)
    {
        if (v[i].second <= w_temp)
        {
            result += v[i].second * v[i].first;
            w_temp -= v[i].second;
        }
        else
        {
            result += w_temp * v[i].first;
            break;
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d %d\n", v[i].first, v[i].second);
    // }

    printf("%d", result);

    return 0;
}