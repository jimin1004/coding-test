#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    int sum = 0;
    vector<int> factor;

    while (1)
    {
        sum = 0;
        factor.clear();
        cin >> n;

        if (n == -1)
            return 0;

        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                factor.push_back(i);
                sum += i;
                // cout << i << '\n';
            }
        }

        if (sum == n)
        {
            cout << n << " = ";
            for (size_t i = 0; i < factor.size(); i++)
            {
                cout << factor[i];
                if (i != factor.size() - 1)
                {
                    cout << " + ";
                }
            }
            cout << "\n";
        }
        else
        {
            cout << n << " is NOT perfect."
                 << "\n";
        }
    }

    return 0;
}