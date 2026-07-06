#include <iostream>
using namespace std;
int main()
{
    string s1 ;
    cin >> s1  ;

    char c1 ;
    cin >> c1 ;

    int n = s1.size();

    for(int i = 0; i<n; i++)
    {
        if(s1[i] != c1)
        {
            cout << s1[i];
        }
        
    }
}