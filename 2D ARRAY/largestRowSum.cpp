#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int m = 4, n = 4;
    int mat[m][n] = {
        {1, 7, 7, -11},
        {2, 0, 3, 12},
        {3, -4, 9, 1},
        {10, 3, 4, -17}};
    int mx = INT_MIN;
    int index = -1;
    for (int row = 0; row < m; row++)
    {
        int sum = 0;
        for (int col = 0; col < n; col++)
        {
            sum += mat[row][col];
        }
        if (sum > mx)
        {
            mx = sum;
            index = row;
        }
    }

    cout << "index : " << index;
    return 0;
}