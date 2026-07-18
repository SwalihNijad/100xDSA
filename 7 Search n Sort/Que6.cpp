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

    for (int pass = 1; pass < n; pass++)
    {
        int key = a[pass];
        int j = pass - 1;
        int shifts = 0;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
            shifts++;
        }
        a[j + 1] = key;
        cout << "Pass " << pass << ": ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << ", ";
        for (int i = 0; i < n; i++)
        {
            if (i == pass + 1)
                cout << "| ";

            cout << a[i] << " ";
        }
        if (pass == n - 1)
            cout << "| ";

        cout << ", shifts = " << shifts << endl;
    }
    return 0;
}