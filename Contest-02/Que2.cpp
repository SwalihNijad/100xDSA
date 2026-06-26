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

  
    int location = 1;
    int small = a[0];
    for(int i=1; i<n; i++)
    {
        
        if(a[i] < small)
        {
            small = a[i];
            location = 1+i;
        }
        else if(a[i] == small)
        {
            location = i +1;
        }
    }
    cout << location;
}