#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int num[n];
    int left = 0;
    int right = n - 1;

    for (int x = 1; x <= n; x++)
    {
        if (x % 2 == 1)
        {
            num[left] = x;
            left++;
        }
        else
        {
            num[right] = x;
            right--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }
}