#include <iostream>   
using namespace std;

int main()
{
    int n;
    cin >> n ;

    for(int i =n; i >= 1; i--)
    {
        //(n-1) spaces
        for(int j =1; j <= (n-i); j++)
        {
            cout << " " ;
        }

        //i stars
        for(int j = 1; j <= i; j++)
        {
            if(i == 1 or i == n or j == 1 or j == i)
            {
                cout << "* " ;  
            }
            else 
            {
                cout << "  " ;
            }                         //if you write "* " youll get tringle or rhs trngle
        }
        cout << endl;
    }
}   