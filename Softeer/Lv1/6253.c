// Softeer 6253. 주행거리 비교하기
// LV.1

#include <stdio.h>

int main(void)
{
    int a, b = 0;
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("A\n");
    else if (b > a)
    {
        printf("B\n");
    }
    else
    {
        printf("same\n");
    }

    return 0;
}