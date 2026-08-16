#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long limit = sqrt(n);

    if (n == 1)
    {
        cout << "NO";
    }
    else
    {
        bool flag = true;
        for (int i = 2; i <= limit; i++)
        {
            if (n % i == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}