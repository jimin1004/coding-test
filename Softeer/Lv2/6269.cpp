// Softeer 6269. 비밀 메뉴
// Lv. 2

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
    int m, n, k = 0;
    int temp = 0;
    int issecret = 0;
    vector<int> user;
    vector<int> secret;

    // 입력
    scanf("%d %d %d", &m, &n, &k);
    // printf("%d %d %d", m, n, k);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &temp);
        secret.push_back(temp);
    }

    // for (int i = 0; i < m; i++)
    // {
    //     printf("%d", secret[i]);
    // }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        user.push_back(temp);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d", user[i]);
    // }

    for (int i = 0; i < n; i++)
    {
        if (user[i] == secret[0])
        {
            for (int j = 1; j < m; j++)
            {
                // printf("%d %d\n", user[i+j], secret[j]);
                if (user[i + j] != secret[j])
                    break;
                else
                {
                    if (j == m - 1)
                        issecret = 1;
                }
            }
        }
    }

    if (issecret)
    {
        printf("secret");
    }
    else
    {
        printf("normal");
    }

    return 0;
}