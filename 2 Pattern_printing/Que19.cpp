#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    for(int i = n; i >= 1; i--)
    {
        //i stars
        for(int j = 1; j <= i; j++)
        {
            cout << "*" ;
        }

        //2(n-i) spaces
        for(int j = 1; j <= 2*(n - i)+1; j++)
        {
            cout << " " ;
        }

        //i stars
        for(int j = 1; j <= i; j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }

    for(int i = 2; i <= n; i++)
    {
        //i stars
        for(int j = 1; j <= i; j++)
        {
            cout << "*" ;
        }

        //2(n-i) spaces
        for(int j = 1; j <= 2*(n - i)+1; j++)
        {
            cout << " " ;
        }

        //i stars
        for(int j = 1; j <= i; j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
}