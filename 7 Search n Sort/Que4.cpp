#include <iostream>
using namespace std;
int main()
{
    int n, min, pos;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        min = a[i];
        pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                pos = j;
            }
        }
        swap(a[i], a[pos]);
        cout << "Pass " << i+1 << ": ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << ", " << "min_selected = " << a[i];
        cout << endl;
    }
    
}