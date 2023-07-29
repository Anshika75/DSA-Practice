#include <iostream>

using namespace std;

int main()
{
    int n, i, j, space;
    cout << "Enter number of lines of pattern: ";
    cin >> n;
    /*upper crown*/
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        for (j = 0; j < space; j++)
        {
            cout << " ";
        }

        for (j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        space += 2;
        cout << "\n";
    }
    /*Lower crown*/
    space = 2 * n - 2;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (j = 0; j < space; j++)
        {
            cout << " ";
        }

        for (j = 0; j <= i; j++)
        {
            cout << "*";
        }
        space -= 2;
        cout << "\n";
    }

    return 0;
}