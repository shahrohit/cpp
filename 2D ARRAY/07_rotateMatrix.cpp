#include <iostream>
using namespace std;
int main()
{
    int row = 3, col = 2;
    int mat[row][col] = {
        {1, 2},
        {4, 5},
        {7, 8}};
    int result[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[j][row - 1 - i] = mat[i][j];
        }
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}