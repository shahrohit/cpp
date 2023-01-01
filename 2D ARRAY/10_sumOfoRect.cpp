#include <iostream>
using namespace std;
int main()
{
    int i1 = 1, i2 = 3, j1 = 1, j2 = 2;
    int m = 4, n = 4;

    int mat[m][n] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {0, 1, 2, 3},
        {4, 5, 6, 7}};
    int sum = 0;
    for (int i = i1; i <= i2; i++)
    {
        for (int j = j1; j <= j2; j++)
        {
            sum += mat[i][j];
        }
    }
    cout << sum;
    return 0;
}