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

    for (int pass = 0; pass < n - 1; pass++)
    {
        int swaps = 0;

        for (int j = 0; j < n - pass - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swaps++;
            }
        }

        cout << "Pass " << pass + 1 << ": ";

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << ", swaps = " << swaps << endl;

        if (swaps == 0)
        {
            break;
        }
    }

    return 0;
}