#include <iostream>
using namespace std;
int main()
{
    int row = 2, col = 4;
    int mat[row][col] = {
        {1, 2, 4, 6},
        {4, 5, 0, -2},
    };
    int result[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[j][row - 1 - i] = mat[i][j];
        }
    }
    cout << endl;
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