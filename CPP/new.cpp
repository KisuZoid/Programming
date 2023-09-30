#include <iostream>
using namespace std;

int main()
{
    int a, b, i;
    cout << "Enter a & b:";
    cin >> a >> b;
    i = a;

    if (a<b)
        while (i<=b)
        {
            cout << i << "\n";
            i++;
        }
    else
        while (i>=b) 
        {
            cout << i << "\n";
            i--; 
        }
    return 0;
}

/*
int main()
{
    int a, b, i;
    cout << "Enter a & b:";
    cin >> a >> b;
    i = a;
    while (i<= b)
    {
        cout << i << "\n";
        i++;
    }
    return 0;
}
*/

/*
int main()
{
    int i = 10;
    while (i>=1)
    {
        cout << i << "\n";
        i--;
    }
    return 0;
}
*/