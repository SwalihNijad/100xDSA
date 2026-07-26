#include <iostream>
using namespace std;

int main()
{
    int marks[10]; // Will store the 10 input values from index 0 to 9
    // to get input cin of all the 10 values we can usse forloop
    for (int i = 0; i <= 9; i++)
    {
        cin >> marks[i];
    }

    for (int i = 0; i <= 9; i++)
    {
        cout << marks[i] << endl;
    }

    // to take input n length of array and

    int n;
    cin >> n;

    for (int i = 0; i <= n - 1; i++) // or i<n  i.e n is exclusive
    {
        cin >> marks[i];
    }

    for (int i = 0; i <= n - 1; i++) // to reverse (int i=<n-1; i=0; i--)
    {
        cout << marks[i] << endl;
    }

    // to get highest number in array, with location

    int a[0] = 1;
    int ans = a[0], location = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > ans)
        {
            ans = a[i];
            location = i + 1
        }
    }
    cout << ans << " " << location;

    // searching element in array

    int n;
    cin >> n;

    int target;
    cin >> target;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            flag = true;
        }

        if (flag)
        {
            cout << "FOUND" << endl;
        }
        else
        {
            cout << "NOTFOUND" << endl;
        }
    }

    // or maybe possible
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            cout << "FOUND" << endl;
        }
        else
        {
            cout << "NOTFOUND" << endl;
        }
    }

    // to count the elements

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            count++;
        }
    }
    cout << count;

    // To sort the array

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            cout << "Array is sorted";
            break;
        }
        else
        {
            cout << "Array is not sorted";
            break;
        }
    }

    // Sorting 0 and 1

    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not sorted";
    }


//Swap two numbers
int a = 5;
int b = 7;

int temp = a;   // or just swap(a, b)
a = b;
b = temp;

cout << a ;
cout << b ;

//swap alternate
for(int i = 1; i<n; i+=2)
{
    swap(a[i] , a[i-1]);
}

//reverse the array
int i = 0; j = n-1;
while(i <= j)
{
    swap (a[i],a[j]);
    i++;
    j--;
}

for(int i=0; i<n;i++)
{
    cout << a[i] << " ";
}

//Missing element (other than twice appearing element in array)

int ans;

for(int i=0; i<n; i++)
{
    int target = a[i];
    int count = 0;
    for(j=0; j<n; j++)
    {
        if(a[i] == target)
        {
            count++;
        }
    }
    if(count == 1)
    {
        ans = a[i];
        break;
    }
}
cout << ans <<endl ;























