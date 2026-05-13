#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans;

    for (int i = 0; i <= n; i++)
    {
        int count = 0;
        int target = a[i];
        for (int j = 0; j <= n; j++)
        {
            if (a[j] == target)
            {
                count++;
            }
        }

        if (count == 2)
        {
            ans = a[i];
            break;
        }
    }
    cout << ans;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
        cout << endl;
    }
}