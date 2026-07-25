#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    while(n--)
    {
        long long l, r;
        cin >> l >> r;

        long long ans = (r * (r + 1) / 2) - ((l - 1) * l / 2);

        cout << ans << endl;
        
    }
}