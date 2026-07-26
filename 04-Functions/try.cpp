#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 and m % i == 0)
        {
            ans = i;
        }
    }
    cout << ans <<endl;
}
