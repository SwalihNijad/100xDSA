#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int c0 = 0, c1 = 0;

        for(int i = 0; i < n; i++)   
        {
            if(a[i] == 0)
                c0++;
            else
                c1++;
        }

        for(int i = 0; i < c0; i++)
            cout << "0 ";

        for(int i = 0; i < c1; i++)
            cout << "1 ";

        cout << endl;  
    }
}