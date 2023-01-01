#include <iostream>
using namespace std;
int main()
{
    int m, n, p, q;
    cout << "order of matrix 1 :: ";
    cin >> m >> n;
    cout << "order of matrix 2 :: ";
    cin >> p >> q;
    // m = 2;
    // n = 2;
    // p = 2;
    // q = 3;
    int mat1[m][n];
    int mat2[p][q];
    int result[m][q];

    int sum;
    if (n != p)
    {
        cout << "Invalid order";
        return 0;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Element of row = " << i << " , col = " << j << " :: ";
            cin >> mat1[i][j];
        }
    }

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << "Element of row = " << i << " , col = " << j << " :: ";
            cin >> mat2[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum += mat1[i][k] * mat2[k][j];
            }
            result[i][j] = sum;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {

            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}