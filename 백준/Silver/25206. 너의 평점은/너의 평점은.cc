#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int main()
{
    char sub_name[51] = {0};
    double credit[20] = {0};
    double credit_sum = 0;
    double res = 0;
    map<string, double> grade = {{"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}, {"P", 0.0}};
    string grade_s;

    for (int i = 0; i < 20; i++)
    {
        cin >> sub_name >> credit[i] >> grade_s;

        // P 과목 제외
        if (grade_s == "P")
            continue;

        res += credit[i] * grade[grade_s];
        credit_sum += credit[i];
    }

    // cout << fixed;
    cout << res / credit_sum;

    return 0;
}