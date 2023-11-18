// Softeer 6293. 징검다리
// Lv. 3

#include <stdio.h>

int main()
{
    int n = 0;
    int a[3000] = {0};
    // int temp = 0; // 돌의 높이를 비교할 때 높이를 임시 저장할 변수
    int dp[3000] = {0}; // n 위치의 돌을 포함하여 밟을 수 있는 돌의 최대 갯수
    int result = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // 돌의 최소 개수는 1
    for (int i = 0; i < n; i++)
    {
        dp[i] = 1;
    }

    // dp[i] 계산. dp[i] = max(dp[j]+1) when j < i, a[j] < a[i]
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j < i && a[j] < a[i])
            {
                if (dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                }
            }
        }
    }

    // dp[i] 중 최대값 찾기
    result = dp[0];
    for (int i = 0; i < n; i++)
    {
        if (dp[i] > result)
        {
            result = dp[i];
        }
    }

    printf("%d", result);

    return 0;
}