#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;

    int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }

    return f;
}

int main()
{
    int rows = 14;

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout << ( fact(i) / ( fact(j) * fact(i-j) ) ) << "   ";
        }
        cout << endl;
    }
}