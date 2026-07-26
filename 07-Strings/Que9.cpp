#include <iostream>
using namespace std;
int main()
{
    string s1 ;
    getline(cin, s1);
    
    int n = s1.size();

    for(int i = 0; i<n; i++)
    {
        if(s1[i] != ' ')
        {
            cout << s1[i];
        }
    }
}