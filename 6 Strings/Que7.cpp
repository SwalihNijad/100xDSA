#include <iostream>
using namespace std;
int main()
{
    string s1 ;
    cin >> s1  ;

    char c1, c2;
    cin >> c1 >> c2;

    int n = s1.size();

    for(int i = 0; i<n; i++)
    {
        if(s1[i] == c1)
        {
            s1[i] = c2;
        }
    }
    cout << s1 ;
}