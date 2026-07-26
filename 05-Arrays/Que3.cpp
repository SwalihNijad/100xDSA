#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    
    int a[n];
    
    long long ans = a[0],location = 1;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] < ans)
        {
            ans = a[i];
            location = i + 1 ;  
        }   
    }
    
    cout << ans << " " << location;
}
