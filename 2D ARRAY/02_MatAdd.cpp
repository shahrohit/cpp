#include <iostream>
using namespace std;
int main()
{
    int m, n;

    cout << "Enter the order of the matrices :: ";
    cin >> m >> n;
    int mat1[m][n], mat2[m][n], mat[m][n];
    cout << "-------------------------------------------------------" << endl;
    cout << "Enter The element of matrix 1 :: " << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << endl;
    cout << "-------------------------------------------------------" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Element of row = " << i << " , col = " << j << " :: ";
            cin >> mat1[i][j];
        }
    }
    cout << "-------------------------------------------------------" << endl;
    cout << "Enter The element of matrix 2 :: " << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << endl;
    cout << "-------------------------------------------------------" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Element of row = " << i << " , col = " << j << " :: ";
            cin >> mat2[i][j];

            mat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}