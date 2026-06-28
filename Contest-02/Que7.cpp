    #include <iostream>
    #include <math.h>
    using namespace std;

    int main()
    {
        int n;
        cin >> n;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        int middleLeft = n/2 - 1;
        int middleRight = n/2 ;

        cout << a[middleLeft] << " " ;
        cout << a[middleRight] << " ";

        int L = middleLeft - 1 ;
        int R = middleRight + 1 ;

        while(L >= 0)
        {
            cout << a[L] << " ";
            cout << a[R] << " ";
            L--;
            R++;
        }
}
