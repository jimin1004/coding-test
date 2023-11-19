// BOJ 2559. 수열
// Difficulty: S3

#include <stdio.h>

int main()
{
    int n, k;
    int temp[100000];
    int sum = 0;
    int max = 0;

    // 입력 받기
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp[i]);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d", temp[i]);
    // }

    // 슬라이딩 윈도우 구현
    for (int i = 0; i <= n - k; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < k; j++)
            {
                // printf("%d ", temp[j]);
                sum += temp[j];
                // printf("%d ", sum);
            }
            max = sum;
            // printf("%d", max);
        }
        else
        {
            sum = sum + temp[i + k - 1] - temp[i - 1];
            max = sum > max ? sum : max;
        }
    }

    printf("%d", max);
}