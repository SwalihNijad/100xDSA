#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i<= n; i++)
    {
        cout << "**" << endl;
    }

    //Given m starts and n lines to get rectangle
    int n;                 
    cin >> n;

    int m;
    cin >> m;

    for (int i = 1; i<= n; i++)
    {
        for (int j = 1; j<= m; j++)
        {
            cout << "*" ;
        }
        cout << endl ;
    }

    //To get square
    int n;                 
    cin >> n;

    for (int i = 1; i<= n; i++)
    {
        for (int j = 1; j<= n; j++)
        {
            cout << "*" ;
        }
        cout << endl ;
    }

    //Pyramid pattern

    int n;                 
    cin >> n;

    for (int i = 1; i<= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" ; 
        } 
        cout << endl ;  
    } 
    
    //Reverse pyramid
    int n;                 
    cin >> n;

    for (int i = 1; i<= n; i++)   // i = n; i>=n ; i--  
    {
        for (int j = n; j >= i; j--)  //or ^
        {
            cout << "*" ; 
        } 
        cout << endl ;  
    } 

    //Hollow square
    int n;                 
    cin >> n;

    for (int i = 1; i<= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i == 1 or i == n or j == 1 or j == n)
            {
                cout << "*" ; 
            } 
            else
            {
                cout << " " ;
            }  
        } 
        cout << endl ;  
    } 

    //Hollow Rectangle
    int n, m ;
    cin >> n >> m ;

    for (int i = 1; i <= n; i++ )
    {
        for (int j = 1; j<= m; j++)
        {
            if(i == 1 or i == n or j == 1 or j == m)
            {
                cout << "*" ;
            }
            else 
            {
                cout << " " ;
            }
        }
        cout << endl ;
    }

    //Holow pyramid
    int n ;
    cin >> n ;

    for (int i = 1; i <= n; i++ )
    {
        for (int j = 1; j<= i; j++)
        {
            if(i == 1 or i == n or j == 1 or j == i)
            {
                cout << "*" ;
            }
            else 
            {
                cout << " " ;
            }
        }
        cout << endl ;
    } 

    //Reverse hollow pyramid
    int n ;
    cin >> n ;

    for (int i = n; i >= 1; i-- )
    {
        for (int j = 1; j<= i; j++)
        {
            if(i == 1 or i == n or j == 1 or j == i)
            {
                cout << "*" ;
            }
            else 
            {
                cout << " " ;
            }
        }
        cout << endl ;
    }

    //Numbered rectangle
    //output:
    // 111111
    // 222222
    // 333333
    // 444444
    // 555555
    int n , m;                           
    cin >> n >> m ;

    for (int i = 1; i<= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cout << i ;
        }
        cout << endl ;
    }


    //Numbered rectangle 2
    //Output :
    // 1234
    // 1234
    // 1234
    int n , m;                           
    cin >> n >> m ;

    for (int i = 1; i<= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cout << j ;
        }
        cout << endl ;
    }

    //Numbered rectangle 3
    //Output :
    // ABCDE
    // ABCDE
    // ABCDE
    int n , m;                           
    cin >> n >> m ;

    for (int i = 1; i<= n; i++)
    {
        char ch = 'A';
        for(int j = 1; j <= m; j++)
        {
            cout << ch ;
            ch++ ;
        }
        cout << endl ;
    }

    //Numbered rectangle 4
    //Output :
    // AAAA
    // BBBB
    // CCCC
    // DDDD
    int n , m;                           
    cin >> n >> m ;

    char ch = 'A';
    for (int i = 1; i<= n; i++)
    {      
        for(int j = 1; j <= m; j++)
        {
            cout << ch ;   
        }
        cout << endl ;
        ch++ ;
    }

    //Pyramid letters
    int n ;                           
    cin >> n ;

    char ch = 'A';
    for (int i = 1; i<= n; i++)
    {      
        for(int j = 1; j <= i; j++)
        {
            cout << ch ;   
        }
        cout << endl ;
        ch++ ;
    }

}
