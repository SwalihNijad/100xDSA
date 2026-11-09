#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int p[n];
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += a[i];
        p[i] = sum;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int L, R;
        cin >> L >> R;
        if (L == 0)
        {
            sum = p[R];
        }
        else
        {
            sum = p[R] - p[L - 1];
        }
        L--;
        R--;
        cout << sum;
    }
} 
