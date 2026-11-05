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

    // Creating a prefix sum array
    int p[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        p[i] = sum;
    }

    int q;                          //Q is query
    cin >> q;
    for (int i = 0; i < n; i++)
    {
        int L, R;
        cin >> L >> R;
        if (L == 0)
        {
            cout << p[R];
        }
        else
        {
            cout << p[R] - p[L - 1];
        }
        cout << sum;
    }

    // SubArray
    int L, R, N;
    cin >> L >> R >> N;
    int A[N];
    for (L = 0; L < N; L++)
    {
        for (R = L; R < N; R++)
        {
            //[L, R]
            for (int i = L; i <= R; i++)
            {
                cout << A[i];
            }
            cout << endl;
        }
    }
    // To find Sum of subArray
    int ans = 0;
    for (L = 0; L < N; L++)
    {
        for (R = L; R < N; R++)
        {
            //[L, R]
            if (L == 0)
            {
                sum =  p[R];
            }
            else
            {
                sum = p[R] - p[L - 1];
            }
            ans += sum;
        }
    }
    cout << ans;
}