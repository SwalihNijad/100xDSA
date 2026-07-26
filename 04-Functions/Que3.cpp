#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=n; i>=i; i--)
    {
        if(n % i == 0)
        {
            cout << i << " " ;
        }
    }
}
