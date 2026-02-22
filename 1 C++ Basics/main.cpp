#include <iostream> 
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    cout << 10 + 3  << endl ; //13
    cout << 10 - 3  << endl ; //7
    cout << 10 * 3  << endl ; //30
    cout << 10 / 3  << endl ; //3    Not 3.3333   if youwant to get so make 
    cout << 10.0 / 3  << endl ; //3.333   Either one of them should be float value
    cout << 10 % 3  << endl ; //1    Reminder 1
     
    //Data  types   int, double bouble(float), char(single crctr), bool, long long(big no.'s)

    int age = 25;
    cout << age << endl ;
    char ch  = '$';             
    bool z = true;

    //Taking input from user

    int a;
    int b;
    double c;

    cin >> a;              // or cin >> a >> b;
    cin >> b;
    cin >> c;

    cout << a + b << endl;
    cout << c << endl;

    // bool conditions

    bool ans1 = 5==5 ;  //true -> will give (1)
    bool ans2 = 5!=5 ;  //false -> will give (0)
    bool ans3 = 1 ; //truee -> (1)
    bool ans4 = -949 ; //true -> (1)
    bool ans5 = 0 ; //false (0)

    cout << ans1 << endl ;
    cout << ans2 << endl ;
    cout << ans3 << endl ;
    cout << ans4 << endl ;
    cout << ans5 << endl ;
    //All the numbers in bool gives true(1) except 0 it gives false(0)

    // conditionals (if - else)

    int n ;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Even";
    }
    else 
    {
        cout << "Odd";
    }

    //min - max

    //(2 numbers)

    int A , B ;
    cin >> A >> B ;

    if (A > B)                 // similar for min change the sign
    {
        cout << "Max = " <<  A << endl ;
    }
    else 
    {
        cout << "Max = " <<  B << endl ;
    }

    //(3 numbers)

    int X , Y , Z ;
    cin >> X >> Y >> Z ;

    if (X>=Y and X>=Z)
    {
        cout << X ;
    }
    else if ( Y>=X and Y>=Z)
    {
        cout << Y;
    }

    else
    {
        cout << Z ;
    }
}
