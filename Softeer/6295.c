// Softeer 6295. A+B
// LV.1

#include <stdio.h>

int main(void)
{
    int n, a, b = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i + 1, a + b);
    }

    return 0;
}