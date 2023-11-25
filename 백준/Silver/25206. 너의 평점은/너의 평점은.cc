#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

char sub_name[51] = {0};
double credit[20] = {0};
double credit_sum = 0;
double res = 0;
pair<const char *, double> grade[10] = {{"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}, {"P", 0.0}};
char grade_s[3] = {0};
int grade_p;

int main()
{
    for (int i = 0; i < 20; i++)
    {
        cin >> sub_name >> credit[i] >> grade_s;
        // cout << sub_name << credit[i] << grade_s << '\n';

        // P 과목 제외
        if (strcmp(grade_s, "P") == 0)
        {
            credit[i] = 0;
            //  cout << "hit";
        }

        // 학점을 점수로 환산할 수 있게 학점 위치 가리키는 포인터에 저장
        for (int j = 0; j < 10; j++)
        {
            if (strcmp(grade_s, grade[j].first) == 0)
            {
                grade_p = j;
            }
        }
        res += credit[i] * grade[grade_p].second;
        credit_sum += credit[i];
        // cout << credit[i] << " " << grade[grade_p].second << '\n';
    }

    // cout << fixed;
    cout << res / credit_sum;

    return 0;
}