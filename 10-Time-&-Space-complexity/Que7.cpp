#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long limit = sqrt(n);

    for (int i = 1; i <= limit; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    for (int i = limit; i >= 1; i--)
    {
        if (n % i == 0 && i != n / i)
        {
            cout << n / i << " ";
        }
    }
}