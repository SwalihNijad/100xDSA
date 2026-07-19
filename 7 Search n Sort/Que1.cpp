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
    int x;
    cin >> x;
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        if(a[i] == x)
        {
            flag = true;
        }
    }
    if(flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}