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

    int x;
    cin >> x;

    int pair = 0;
    

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == x)
            {
                pair++;
            }
        }
    }
    cout << pair;
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