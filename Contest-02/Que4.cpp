#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long a;
    cin >> a;

    long long b;
    cin >> b;

    

    if(a == 0 and b == 1)
    {
        cout << "Yes" << endl;
    }
    else if(a == 1 and b == 0)
    {
        cout << "Yes";
    }

    else if(a == b)
    {
        cout << "Yes";
    }

    else
    {
        cout << "No";
    }
}
