#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if(n==0)
    {
        cout << 1 << endl;
        return 0;
    }

    int count =0;
    while (n != 0)
    {
        if(n % 10 == 0)
        {
            count++;
        }
        n = n / 10;
    }

    cout << count << endl;
}
