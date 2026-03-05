#include <iostream>
using namespace std;
 
int main()
{
    long long n;
    cin >> n;
    long long ans =0;
    long long rev = n;
    
    while (n != 0)
    {
        ans = (ans*10) + (n % 10);
        n = n/10 ;
    }

    if (ans == rev)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
}