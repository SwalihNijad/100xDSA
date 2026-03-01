#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n ;

    int i = 1 ;
    while (i <= n)   //or write specific number without taking input
    {
        cout << i << endl ;
        i++ ;
    }  
    
    //print form N to 1

    int N;
    cin >> N ;

    int i = N ;
    while (i >= 1)   //or write specific number without taking input
    {
        cout << i << endl ;
        i-- ;
    } 

    //print from l to r

    int l, r;
    cin >> l >> r ;

    int i = l ;                     //ex. 4 8 // 4, 5, 6, 7, 8
    while (i <= r)   
    {
        cout << i << endl ;
        i++ ;
    }

    //print all even numbers from 1 to n

    if (i % 2 == 0)           
        {// int X ;
    cin >> X ;

    int i = 1;          //without writing 'if condn' // i = 2;
    while (i <= X)
    {
        
            cout << i << endl;
        }
        i++ ;                     //i += 2 ; 
    }

    //print all uppercase alphabets A - Z
    
    char ch  = 'A' ;
    while (ch <= 'Z')
    {
        cout << ch << endl;
        ch++ ;
    }

    //print multi table 

    int x ;
    cin >> x ;
    
    int i = 1;
    while (i <= 10)
    {
        cout << x << " x " << i << " = " << x*i << endl ;
        i++ ;
    }
    
    //print number in reverse
    
    int n ;
    cin >> n ;

    while (n != 0)
    {
        cout << n % 10 ;
        n = n/10 ;
    }  
    
    //digit sum

    int sum = 0;

    int N ;
    cin >> N ;


    while (N != 0)
    {
        sum += N %10 ;  // to count , count++
        N = N/10 ;
    }

    cout << sum << endl;
    
    //to reverse and store in variable

    int ans = 0 ;
    int n ;
    cin >> n ;

    while (n != 0)
    {
        ans = (ans*10) + n % 10 ;
        n = n/10 ;
    } 

    cout << "ans = " << ans << endl ;


}





