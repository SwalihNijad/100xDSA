#include <iostream>  
using namespace std;

int main()
{
    int n;
    cin >> n ;

    for(int i =1; i<= n; i++)
    {
        //(n-1) spaces
        for(int j =1; j <= (n-i); j++)
        {
            cout << " " ;
        }

        //i stars
        for(int j = 1; j <= i; j++)
        {
            if(j == i)
            {
                cout << "*" ;  
            } 
            else
            {
                cout << "* " ;
            }                  //if you write "* " youll get tringle or rhs trngle
        }
        cout << endl;
    }
}   