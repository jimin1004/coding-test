// Softeer 6294. 성적 평균
// Lv. 3

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
    int n, k = 0;
    int start, end = 0;
    double sum = 0;
    scanf("%d %d", &n, &k);
    int s[1000000] = {};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
        // printf("%d ", s[i]);
    }

    for (int i = 0; i < k; i++)
    {
        scanf("%d %d", &start, &end);
        // printf("%d %d\n", start, end);
        for (int j = start - 1; j < end; j++)
        {
            // printf("j:%d s[j]: %d \n", j, s[j]);
            sum += (double)s[j];
        }
        // printf("%f \n", sum);
        printf("%.2f\n", sum / (end - start + 1));
        sum = 0;
    }

    return 0;
}