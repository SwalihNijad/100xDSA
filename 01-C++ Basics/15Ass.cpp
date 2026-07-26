#include <iostream>
using namespace std;

int main()
{
    int A, B ;
    cin >> A >> B; 

    
    if (A <= B){
        cout << "Min = " << A << endl ;
    } 
    else
    {
        cout << "Min = " << B << endl ;
    }

    if (A >= B){
        cout << "Max = " << A << endl ;
    } 
    else
    {
        cout << "Max = " << B << endl ;
    }
}