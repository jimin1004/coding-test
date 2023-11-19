// BOJ 9251. LCS
// Difficulty: G5

#include <stdio.h>
#include <string.h>

int main()
{
    char x[1001], y[1001];
    int dp[1001][1001] = {
        0,
    };

    // 문자열 입력 받기
    scanf("%s %s", x, y);

    // printf("%s %s", x, y);
    //  printf("%d", sizeof(x));

    // dp 첫 행과 첫 열 채우기
    dp[0][0] = x[0] == y[0] ? 1 : 0;

    for (int i = 1; i < strlen(y); i++)
    {
        if (x[0] == y[i])
        {
            dp[0][i] = 1;
        }
        else
        {
            dp[0][i] = dp[0][i - 1];
        }
    }

    for (int i = 1; i < strlen(x); i++)
    {
        if (x[i] == y[0])
        {
            dp[i][0] = 1;
        }
        else
        {
            dp[i][0] = dp[i - 1][0];
        }
    }

    // dp 나머지 채우기
    for (int i = 1; i < strlen(x); i++)
    {
        for (int j = 1; j < strlen(y); j++)
        {
            if (x[i] == y[j])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = dp[i - 1][j] > dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1];
            }
        }
    }

    // dp[i][j] 출력
    // for (int i = 0; i < strlen(x); i++)
    // {
    //     for (int j = 0; j < strlen(y); j++)
    //     {
    //         printf("%d ", dp[i][j]);
    //     }
    //     printf("\n");
    // }

    printf("%d", dp[strlen(x) - 1][strlen(y) - 1]);

    return 0;
}