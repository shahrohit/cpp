#include <iostream>
using namespace std;
bool isPresent(int mat[][4], int m, int n, int key)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int m = 4, n = 4;
    int mat[m][4] = {
        {1, 7, 7, 11},
        {2, 0, 3, 12},
        {3, -4, 9, 1},
        {10, 3, 4, 17}};
    int key = 10;
    cout << isPresent(mat, m, n, key);
    return 0;
}