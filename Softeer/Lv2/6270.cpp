// Softeer 6270. GBC
// Lv. 2
// 다시 풀어보기!!

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
    int n, m = 0;
    int temp, temp2 = 0;
    vector<pair<int, int>> limit;
    vector<pair<int, int>> test;
    vector<int> speed;

    // 입력
    scanf("%d %d", &n, &m);
    // printf("%d %d", n, m);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &temp, &temp2);

        if (i > 0)
        {
            limit.push_back(make_pair(limit[i - 1].first + temp, temp2));
        }
        else
        {
            limit.push_back(make_pair(temp, temp2));
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("{%d, %d} ", limit[i].first, limit[i].second);
    // }

    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &temp, &temp2);

        if (i > 0)
        {
            test.push_back(make_pair(test[i - 1].first + temp, temp2));
        }
        else
        {
            test.push_back(make_pair(temp, temp2));
        }
    }

    // for (int i = 0; i < m; i++)
    // {
    //     printf("{%d, %d} ", test[i].first, test[i].second);
    // }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (test[i].first <= limit[j].first)
            {
                speed.push_back(test[i].second - limit[j].second);
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (limit[i].first <= test[j].first)
            {
                speed.push_back(test[j].second - limit[i].second);
                break;
            }
        }
    }

    sort(speed.begin(), speed.end());

    if (speed.back() > 0)
    {
        printf("%d", speed.back());
    }
    else
    {
        printf("0");
    }

    // for (int i = 0; i < speed.size(); i++) {
    //    printf("%d\n",speed[i]);
    //};

    return 0;
}