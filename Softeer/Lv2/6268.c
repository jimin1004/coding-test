// Softeer 6268. [21년 재직자 대회 예선] 전광판
// Lv. 2

#include <stdio.h>

// 2진수에서 1의 갯수 세기
int count_one(int x)
{
    int count = 0;
    while (x)
    {
        if (x % 2 == 1)
        {
            count++;
        }
        x = x / 2;
        // printf("x: %d\n", x);
    }
    return count;
}

// 각자리수 나눠서 배열에 저장. 해당 자릿수가 없으면 10 저장.
int split(int x, int *x_split)
{
    for (int i = 4; i >= 0; i--)
    {
        if (x == 0 && i <= 3)
        {
            *(x_split + i) = 10;
        }
        else
        {
            *(x_split + i) = x % 10;
            x = x / 10;
        }
    }
    // for (int i = 0; i < 5; i++) {
    //   printf("%d ", *(x_split + i));
    // }
    // printf("\n");
}

int main(void)
{
    int t = 0;
    int leds[11] = {0b1110111, 0b0010010, 0b1011101, 0b1011011, 0b0111010, 0b1101011, 0b1101111, 0b1110010, 0b1111111, 0b1111011, 0b0000000}; // leds[10]은 led가 꺼진 경우
    int a, b = 0;
    int xor = 0;
    int a_split[5] = {};
    int b_split[5] = {};
    int result = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        result = 0;
        scanf("%d %d", &a, &b);
        split(a, a_split);
        split(b, b_split);

        for (int j = 0; j < 5; j++)
        {
            xor = leds[a_split[j]] ^ leds[b_split[j]];
            // printf("%d %d\n", j, count_one(xor));
            result = result + count_one(xor);
        }
        //
        // printf("%b %b\n", leds[a], leds[b]);
        // printf("%d", count_one(xor));

        printf("%d\n", result);
    }
    return 0;
}