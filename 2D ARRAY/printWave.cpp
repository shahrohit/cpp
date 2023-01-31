#include <iostream>
using namespace std;
int main()
{
    int m = 4, n = 4;
    int mat[m][n] = {
        {1, 7, 7, 11},
        {2, 0, 3, 12},
        {3, -4, 9, 1},
        {10, 3, 4, 17}};
    int row = 0;
    for (int col = 0; col < n; col++)
    {
        bool isEvenIndex = (col % 2 == 0);
        isEvenIndex ? (row = 0) : (row = m - 1);
        while (row >= 0 and row < m)
        {
            cout << mat[row][col] << " ";
            isEvenIndex ? row++ : row--;
        }
    }
    return 0;
}