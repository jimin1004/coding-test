// Softeer 6291. 강의실 배정
// Lv. 3

#include <stdio.h>
#include <stdlib.h>

typedef struct class
{
    int start;
    int finish;
} Class;

int cmp(const void *a, const void *b)
{
    struct class *classA = (const struct class *)a;
    struct class *classB = (const struct class *)b;
    int com = classA->finish - classB->finish;
    if (com == 0)
    {
        return classA->start - classB->start;
    }
    return com;
}

int main(void)
{
    int n;
    struct class classes[1000000];
    int count = 1;

    // classes 배열에 강의 시작 시간과 종료시간을 pair로 저장
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &classes[i].start, &classes[i].finish);
    }

    // 강의 종료 시간 기준으로 배열 정렬
    qsort(classes, n, sizeof(struct class), cmp);

    int fin = classes[0].finish;
    for (int i = 1; i < n; i++)
    {
        if (classes[i].start >= fin)
        {
            fin = classes[i].finish;
            count++;
        }
    }

    // for(int i = 0; i < n; i++) {
    //   printf("%d %d\n", classes[i].start, classes[i].finish);
    // }

    printf("%d", count);

    return 0;
}