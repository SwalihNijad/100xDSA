#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long m;
    cin >> m;

    long long limit = sqrt(n);

    int count = 0;

    for (int i = 1; i <= limit; i++)  //two loops used here
    {
        if (n % i == 0)
        {
            count++;
            if (count == m)
            {
                cout << i;
                return 0;
            }
        }
    }

    for (int i = limit; i >= 1; i--)
    {
        if (n % i == 0 && i != n / i)
        {
            count++;
            if (count == m)
            {
                cout << n / i;
                return 0;
            }
        }
    }
    cout << -1;
}