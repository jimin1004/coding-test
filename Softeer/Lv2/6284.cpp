// Softeer 6284. 바이러스
// Lv. 2

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
    int n, p, k = 0;
    int result = 0;
    unsigned long int virus = 0;
    int temp = 1000000007;
    scanf("%d %d %d", &k, &p, &n);
    virus = k % temp;
    for (int i = 1; i <= n; i++)
    {
        virus *= p;
        virus = virus % temp;
    }

    printf("%ld", virus);
    return 0;
}

// 처음부터 % mod 연산하면서 결과 도출