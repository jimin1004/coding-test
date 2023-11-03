// Softeer 6280. 지도 자동 구축
// Lv. 2

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char **argv)
{
    int n = 0;
    double result = 4;
    printf("%f\n", sqrt(result));
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        result = (sqrt(result) + pow(2, i - 1)) * (sqrt(result) + pow(2, i - 1));
    }
    printf("%d", (int)result);

    return 0;
}

// dp 문제
// sqrt와 pow의 반환형이 double인 점 유의