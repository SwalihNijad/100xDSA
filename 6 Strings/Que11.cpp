#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;

    bool lower = false;
    bool upper = false;
    bool digit = false;
    bool special = false;

    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
        {
            lower = true;
        }
        else if (s[i] >= 'A' and s[i] <= 'Z')
        {
            upper = true;
        }
        else if (s[i] >= '0' and s[i] <= '9')
        {
            digit = true;
        }
        else
        {
            special = true;
        }
    }

    if (n == 10 && lower && upper && digit && special)
    {
        cout << "Strong";
    }
    else
    {
        cout << "Weak";
    }
}