#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long limit = sqrt(n);

    int count = 0;
    for (int i = 1; i <= limit; i++)
    {
        if (n % i == 0)
        {
            if (i != n / i)
            {
                count+=2;
            }
            if (i == n / i)
            {
                count++;
            }
        }
    }
    cout << count;
}