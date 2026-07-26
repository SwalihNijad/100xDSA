#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    while(n--)
    {
        long long t, l, r;
        cin >> t >> l >> r;

        if(l > r)
        {
            cout << 0 << endl;
        }
        else if(t == 1)
        {
            long long ans = max(0LL, r-l-1);
            cout << ans << endl;
        }
        else if(t == 2)
        {
            long long ans = r-l;
            cout << ans << endl;
        }
        else if(t == 3)
        {
            long long ans = r-l;
            cout << ans << endl;
        }
        else if(t == 4)
        {
            long long ans = r-l+1;
            cout << ans << endl;
        }  
    }
}