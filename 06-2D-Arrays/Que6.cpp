#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    
    for(int j=0; j<m; j++)
    {
        int sum = a[0][j];
        for(int i=1; i<n; i++)
        {
            sum = sum + a[i][j];
        } 
        cout << sum << " "; 
    }

    
    
}