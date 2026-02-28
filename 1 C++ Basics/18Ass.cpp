#include <iostream>
using namespace std;

int main()
{
    int X,Y ;
    cin >> X >> Y ; 

    if(X == 0 and Y == 0){
        cout << "Origin" ;
    }

    else if (Y == 0 and X != 0){
        cout << "x axis" ;
    }

    else if (X == 0 and Y != 0){
        cout << "y axis" ;
    }
    
    else if (X > 0 and Y > 0){
        cout << "1st Quadrant" ;
    }

    else if (X < 0 and Y > 0){
        cout << "2nd Quadrant" ;
    }

    else if (X < 0 and Y < 0){
        cout << "3rd Quadrant" ;
    }

    else if (X > 0 and Y < 0){
        cout << "4th Quadrant" ;
    }
}