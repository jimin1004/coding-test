// Softeer 6282. 장애물 인식 프로그램
// Lv. 2

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int n = 0;
int map[25][25] = {};
int visited[25][25] = {0};
int cnt = 1;
vector<int> obstacle;

// 장애물 블록 카운트
int count_obstacle(int x, int y)
{
    int dx[4] = {0, 0, -1, +1};
    int dy[4] = {1, -1, 0, 0};

    for (int i = 0; i < 4; i++)
    {
        int xn = x + dx[i];
        int yn = y + dy[i];

        // 범위 안 넘는지, 이미 방문 했는지 조사
        if (xn < 0 || yn < 0 || xn >= n || yn >= n || visited[xn][yn] == 1)
            continue;

        if (map[xn][yn] == 1)
        {
            printf("xn,yn : %d %d\n", xn, yn);
            visited[xn][yn] = 1;
            cnt++;
            count_obstacle(xn, yn);
        }
    }
    // printf("%d", cnt);
    return cnt;
}

int main(int argc, char **argv)
{

    // 지도 입력 받기
    scanf("%d", &n);
    // printf("n= %d\n", n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%1d", &map[i][j]);
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%d ", map[i][j]);
    //     }
    //     printf("\n");
    // }

    // 장애물 블록 시작점 찾기
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (map[i][j] == 1 && visited[i][j] == 0)
            {
                printf("i,j : %d %d\n", i, j);
                visited[i][j] = 1;
                obstacle.push_back(count_obstacle(i, j));
                cnt = 1;
            }
        }
    }

    // 오름차순 정렬
    sort(obstacle.begin(), obstacle.end());

    // 출력
    printf("%d\n", obstacle.size());
    for (int i = 0; i < obstacle.size(); i++)
    {
        printf("%d\n", obstacle[i]);
    }

    return 0;
}

// 입력 사이 공백 없을 때 %1d로 자를 수 있다
// 플러드필, dfs 이용한 문제로 처음해보는 나는 매우 어려웠다!!