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

    for(int i=1; i<n; i+=2)
    {
        swap(a[i],a[i-1]);
    }

    for(int i = 0; i<n; i++)
    {
        cout << a[i] << " " ;
    }
}

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i<t; i++)
    {
        solve();
        cout << endl;
    }
    
}