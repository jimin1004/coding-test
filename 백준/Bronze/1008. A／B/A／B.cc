#include <iostream>

using namespace std;

int main()
{
    double a, b;
    double result;

    cin >> a >> b;

    result = a / b;

    cout.precision(10);
    cout << result;

    return 0;
}