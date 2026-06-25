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
    
    int m;
    cin >> m ;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }


    for(int i = 0; i < n; i++)
    {
        
        for(int j = 0; j<m; j++)
        {
            if(a[i] == b [j])
            {
                cout << a[i] << " " ;
                b[j] = -1;
                break;
            }
        }
    }
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