#include <iostream>
using namespace std;

int main(){
    int F;
    int N;

    cin >> F >> N ;

    if(F % N == 0){
        cout << "Yes" ;
    }
    else {
        cout << "No" ;
    }
}