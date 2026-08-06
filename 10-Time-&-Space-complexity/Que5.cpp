#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long limit = sqrt(n);

    bool flag =  true;
    for(int i=2; i<=limit; i++)
    {
        if(n == 1)
        {
            flag = false;
        }
        else if(n % i == 0)
        {
            flag = false;
        } 
    }
    if(flag == true)
    {
        cout << "YES";
    }
    else if(flag == false)
    {
        cout << "NO";
    }
}