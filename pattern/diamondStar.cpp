
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        // for the star *
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - i; j++)
        {
            if (j >= i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}