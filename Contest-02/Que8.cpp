#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int x = 1; x <= n; x++)
    {
        int count = 0;
        for (int i = 1; i <= x; i++)
        {
            if (x % i == 0)
            {
                count++;
            }
        }

        if (count <= 4)
        {
            cout << x << " ";
        }
    }
    return 0;
}
