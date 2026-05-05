#include <iostream>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}