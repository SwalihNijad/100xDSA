#include <iostream>
using namespace std;

//Set of statements / a block of code / that can be reused whenever you want
int factorial(int n)
{
    int ans = 1;
    for(int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

int main()
{
    int n, r;
    cin >> n >> r;

    //n!
    int nfact = factorial(n);

    //r!
    int rfact = factorial(r);

    //(n-r)!
    int nrfact = factorial(n - r);

    cout << nfact/(rfact * nrfact) << endl;
}

//To add 2 or three numbers

int sum2(int a, int b)
{
    return a + b ;
}

int sum3(int a, int b, int c)
{
    return a + b + c ;
}

int main()
{
    int ans1 = sum2(10, 12);
    int ans2 = sum3(10, 12, 8);
    cout << ans1 << " " << ans2 << endl;
}

//Write a function that takes integr n and prints from 1 to n

void print1toN(int n)
{
    for(int i =1; i <= n ; i++)
    {
        cout << i << " " ;
    }
    cout << endl;
}


int main()
{
    print1toN(10);
    print1toN(15);
    print1toN(8);

}

//To print factor
int main()
{
    int n ;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << i << " ";
        }
    }
}

//To count factor

int main()
{
    int n ;
    cin >> n;

    int cnt =0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}

//To check prime 
//if two factor then it is a prime

int main()
{
    int n ;
    cin >> n;

    int cnt =0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    if(cnt == 2)
    {
        cout << "Prime" ;
    }
    else
    {
        cout << "Not Prime" ;
    }
}

//Using bool

bool isPrime(int n)
{
    int cnt = 0;    
    for(int i =1; i <= n;i++)
    {
        if(n % i==0)
        {
            cnt++;
        }
    }
    return(cnt == 2); 
}

int main()
{
    int n ;
    cin >> n ;

    bool ans = isPrime(n);
    if(ans)
    {
        cout << "Prime";
    }
    else 
    {
        cout << "Not Prime";
    }
}

//To print all the prime no.s in till N

bool isPrime(int n)
{
    int cnt = 0;    
    for(int i =1; i <= n;i++)
    {
        if(n % i==0)
        {
            cnt++;
        }
    }
    return(cnt == 2); 
}

int main()
{
    int n;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        if(isPrime(i))
        {
            cout << i << " " ;
        }
    }
}

//Defining int long long

#define int long long  //defining int as long long
signed main()          //to avoid longlong main we use signed 
{
    int x = 100000;
    int y = 100000;

    cout << x*y << endl;

    int a = 10;
    int b = 3;

    cout << a / b << endl;
}