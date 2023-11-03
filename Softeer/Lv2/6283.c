// Softeer 6283. 8단 변속기
// Lv. 2

#include <stdio.h>

int main(void)
{
    int gear[8];
    int state = 0; // 1=asc, 2=des, 3=mix

    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &gear[i]);
    }

    for (int i = 1; i < 8; i++)
    {
        if (state == 0)
        {
            if (gear[i] > gear[i - 1])
                state = 1;
            else
                state = 2;
        }
        else if ((gear[i] > gear[i - 1]) & (state == 2))
        {
            state = 3;
            break;
        }
        else if ((gear[i] < gear[i - 1]) & (state == 1))
        {
            state = 3;
            break;
        }
    }

    switch (state)
    {
    case 1:
        printf("ascending");
        break;
    case 2:
        printf("descending");
        break;
    case 3:
        printf("mixed");
        break;
    default:
        break;
    }

    return 0;
}