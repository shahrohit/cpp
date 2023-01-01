
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j == 1 || j == 2 * n - 1 || i == j || j == 2 * n - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        cout << ch;
    }

    return 0;
}