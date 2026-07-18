#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    // Insertion Sort (count shifts)
    int shifts = 0;
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
            shifts++;
        }

        a[j + 1] = key;
    }
    // Selection Sort (count swaps)
    int swaps = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (b[j] < b[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swap(b[i], b[minIndex]);
            swaps++;
        }
    }
    if (shifts < swaps)
    {
        cout << "Insertion Sort" << endl;
    }
    else if (swaps < shifts)
    {
        cout << "Selection Sort" << endl;
    }
    else
    {
        cout << "Tie" << endl;
    }
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}