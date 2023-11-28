#include <iostream>
#include <vector>

using namespace std;

int x = 1;
int y = 1;
int n = 0;

void right()
{
    // cout << "1";
    y += 1;
    n--;
}

void down()
{
    x += 1;
    n--;
}

void diag_up()
{
    while (x > 1 && n - 1 > 0)
    {
        x -= 1;
        y += 1;
        n--;
    }
}

void diag_down()
{
    while (y > 1 && n - 1 > 0)
    {
        x += 1;
        y -= 1;
        n--;
    }
}

int main()
{
    int state = 0;
    cin >> n;

    while (n - 1)
    {
        switch (state % 4)
        {
        case 0:
            // cout << "right";
            right();
            state++;
            break;
        case 1:
            // cout << "right";
            diag_down();
            state++;
            break;
        case 2:
            // cout << "right";
            down();
            state++;
            break;
        case 3:
            // cout << "right";
            diag_up();
            state++;
            break;

        default:
            break;
        }
    }

    cout << x << "/" << y;

    return 0;
}