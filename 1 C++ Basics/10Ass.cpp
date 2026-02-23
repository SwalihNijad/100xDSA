#include <iostream>
using namespace std;

int main()
{
    int N;
    int M;

    cin >> N;
    cin >> M;

    int lastDigitN = N % 10 ;
    int lastDigitM = M % 10 ;

    cout << lastDigitN + lastDigitM << endl;
}