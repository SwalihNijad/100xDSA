#include <iostream>
using namespace std;
int main()
{
    string s ;
    cin >> s;
 
    int n = s.size();
 
    int ans;
    for(int i=0; i<n; i++)
    {
        if(s[i] >= 'a' and s[i] <= 'z')
        {
            ans = s[i] - 32;
        }
        else if(s[i] >= 'A' and s[i] <= 'Z')
        {
            ans = s[i] + 32;
        }
        cout << (char)ans;
    }  
         
}
