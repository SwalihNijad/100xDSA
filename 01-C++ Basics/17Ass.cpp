#include <iostream>
using namespace std;

int main()
{
    int A ;
    cin >> A ; 

    if( A < 0 || A > 100){
        cout << "Invalid Input" << endl;
    }

    else if (A > 90){
        cout << "Excellent" << endl ;
    } 
    else if(A > 80 and A <= 90)
    {
        cout << "Good" << endl ;
    } 
    else if(A > 70 and A <= 80)
    {
        cout << "Fair" << endl ;
    }
    else if(A > 60 and A <= 70)
    {
        cout << "Meets Expectations" << endl ;
    }
    else
    { 
        cout << "Below Par" << endl ;
    } 
    
    
}