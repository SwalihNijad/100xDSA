#include <iostream>   //not complete
using namespace std;

int main()
{
    int n;
    cin >> n ;

    for(int i = 1; i <= n; i++)
    {
        for(int j =1; j <= i; j++)
        {
            if(i == 1 or j == 1 or j == i)
            {
                cout << " * " ;
            }
            else
            {
                cout << "   " ;
            }
        }
        cout << endl ;
    }

    for(int i = 2; i <= n; i++)
    {
        for(int j =n; j >= i; j--)
        {
            if(i == 1 or i == n or j == n or j == i)
            {
                cout << " * " ;
            }
            else
            {
                cout << "   " ;
            }
        }
        cout << endl;
    }
}   