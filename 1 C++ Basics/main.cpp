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

}
