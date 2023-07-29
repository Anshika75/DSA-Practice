#include <iostream>

using namespace std;

int main()
{
    int n, i;
    char j;
    cout << "Enter number of lines of pattern: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = ('A' + n - 1) - i; j <= ('A' + n - 1); j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}