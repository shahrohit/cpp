
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * n - i; j++)
        {
            if (j == i || j == 2 * n - i)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - i; j++)
        {
            if (j == i || j == 2 * n - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}