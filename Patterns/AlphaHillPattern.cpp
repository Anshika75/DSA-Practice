#include <iostream>

using namespace std;

int main()
{
    int n, i, j, breakpt;
    char k = 'A';
    cout << "Enter number of lines of pattern: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        k = 'A';

        breakpt = (2 * i + 1) / 2;
        for (j = 1; j <= 2 * i + 1; j++)
        {

            cout << k;
            if (j <= breakpt)
            {
                k++;
            }
            else
            {
                k--;
            };
        }
        cout << "\n";
    }

    return 0;
}