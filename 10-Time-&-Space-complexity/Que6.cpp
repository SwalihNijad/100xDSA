#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int count = 0;

    for (int i = 2; i <= n; i++)
    {
        bool flag = true;      // flag is used here to do count++

        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            count++;
        }
    }

    cout << count;
}