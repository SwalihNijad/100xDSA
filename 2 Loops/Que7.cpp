#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    int Positive = 0;
    int Negative = 0;
    int Even = 0;
    int Odd =0;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        if (x > 0)
        {
            Positive++ ;
        }
        else if(x < 0)
        {
            Negative++ ;
        }

        if (x % 2 ==  0)
        {
            Even++ ;
        }
        else
        {
            Odd++ ;
        }

    }

    cout << Positive << endl;
    cout << Negative << endl;
    cout << Even << endl;
    cout << Odd << endl;
}