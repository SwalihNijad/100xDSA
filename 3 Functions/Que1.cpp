#include <iostream>
using namespace std;

int function(int n)  
{
    for(int i =1; i<=n; i++)
    {
        cout << "I am learning functions"  << endl;
    }
}

int main()
{
	int n;
	cin >> n;

    function(n);
}