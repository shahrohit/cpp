
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    // method 1:
    for (int i = 1; i <= n; i++)
    {
        // for spaces
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        // for the star *
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1 || i == n)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
    // method 2:
    cout << endl
         << endl;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * n - i; j++)
        {
            if (i == 1 || j == i || j == 2 * n - i)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
    return 0;
}