#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int p;
    cin >> p;

    int pass = 0 ;
    int fail = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] >= p )
        {
            pass++;
        }
        else
        {
            fail++;
        }
    }
    cout << "Pass: " << pass << endl;
    cout << "Fail: " << fail << endl;
}