#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            n = n / i;
            cout << i << '\n';
            i = 1;
        }

        if (n == 1)
        {
            break;
        }
    }

    return 0;
}