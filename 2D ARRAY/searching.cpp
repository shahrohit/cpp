#include <iostream>
using namespace std;
int main()
{
    int m = 4, n = 4;
    int mat[m][n] = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}};

    int row = 0, col = n - 1;
    bool isExist = false;
    int key = 9;
    while (row < m && col >= 0)
    {
        if (key == mat[row][col])
        {
            isExist = true;
            break;
        }
        if (key < mat[row][col])
        {
            col--;
        }
        if (key > mat[row][col])
        {
            row++;
        }
    }
    cout << isExist << endl;
    cout << row << "\t" << col;

    return 0;
}