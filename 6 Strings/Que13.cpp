#include <iostream>
using namespace std;
int main()
{
    string s ;
    cin >> s;

    int n = s.size();

    char num = s[0] ;
    for(int i=0; i<n; i++)
    {
        num = num + s[i]
    }
    char rev;
    for(int i=n-1; i>=0; i--)
    {
        rev = rev + s[i]; 
    }    
    if(num == rev)
    {
        cout << "YES";
    } 
    else
    {
        cout << "NO";
    }    
}