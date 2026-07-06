#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;

    int ans;
    if(ch >= 'A' and ch <= 'Z')
    {
        ans = ch + 32;
        cout << (char)ans;
    }
    else
    {
        cout << ch;
    }
    
}