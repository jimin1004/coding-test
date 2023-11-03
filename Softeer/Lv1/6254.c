// Softeer 6254. 근무 시간
// LV.1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char start[6], end[6] = "";

    FILE *input = fopen("6254_input.txt", "rt");
    int finished = 0;
    int result = 0;
    int ihr, imin = 0;

    for (int i = 0; i <= 4; i++)
    {
        finished = fscanf(input, "%s %s", start, end);
        // scanf("%s %s", start, end);
        if (finished == EOF)
            break;

        // printf("%s %s", start, end);

        // 끝나는 시간 분으로 변환
        char *hr, *min = NULL;
        hr = strtok(end, ":");
        min = strtok(NULL, ":");
        // printf("%s %s\n", hr, min);
        ihr = atoi(hr);
        imin = atoi(min);
        result += (60 * ihr) + imin;
        hr = strtok(start, ":");
        min = strtok(NULL, ":");
        // printf("%s %s\n", hr, min);
        ihr = atoi(hr);
        imin = atoi(min);
        result -= (60 * ihr) + imin;
    }
    fclose(input);

    printf("%d", result);

    return 0;
}

/*
처음부터 int로 받으면 되는데 멍청 그 자체
*/