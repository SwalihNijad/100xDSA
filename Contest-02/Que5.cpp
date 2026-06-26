#include <iostream>
#include <math.h>
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

    for (int i = 1; i < n; i++)
    {
        if (a[0] != a[i])
        {
            cout << "NO";
            return 0;
            
        }
    }
    cout << "YES";
}
