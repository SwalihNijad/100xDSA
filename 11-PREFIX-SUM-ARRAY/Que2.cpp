#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int p[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            sum += a[i];
        }
        p[i] = sum;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int L, R;
        cin >> L >> R;
        if (L == 1)
        {
            sum = p[R - 1];
        }
        else
        {
            sum = p[R - 1] - p[L - 2];
        }

        cout << sum << '\n';

        cout << sum;
    }
}
