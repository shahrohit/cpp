#include <iostream>
using namespace std;
int main()
{
    int m, n;
    m = 2, n = 2;
    int mat[m][n] = {
        {1, 2},
        {4, 5}};

    int tranpose[n][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tranpose[j][i] = mat[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << tranpose[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}