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

    for (int col = 0; col < n; col++)
    {
        int sum = 0;
        for (int row = 0; row < m; row++)
        {
            sum += mat[row][col];
        }
        cout << "Sum in " << col << " col : " << sum << endl;
    }
    return 0;
}