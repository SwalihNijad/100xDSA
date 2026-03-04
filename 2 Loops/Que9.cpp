#include <iostream>
using namespace std;        

int main()
{
    long long n;
    cin >> n;
   
    long long ans =1 ;
    

    int i = 1;
    for (i=1; i<=n; i++)
    {
        ans *= i ;  
    }
    cout << ans ;
}