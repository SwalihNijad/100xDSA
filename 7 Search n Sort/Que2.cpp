#include <iostream>
using namespace std;
int main()
{
    int low, high, mid ;
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int target;
    cin >> target;

    bool flag = false;
    low = 0;
    high = n - 1;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(a[mid] == target)
        {
            flag = true;
            break;
        }
        else if (a[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
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