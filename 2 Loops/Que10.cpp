#include <iostream>
using namespace std;
 
int main()
{
    long long x, n;
    cin >> x >> n ;
    long long ans = 1;
    

    int i =1;
    for(i = 1; i<= n; i++)
    {
        ans = ans*x;
    }
    cout << ans ;
}