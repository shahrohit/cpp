#include <iostream>
#include <vector>
using namespace std;
bool search(vector<vector<int>> &mat, int key)
{

    int m = mat.size();
    int n = mat[0].size();
    int row = 0, col = n - 1;
    bool isExist = false;
    while (row < m && col >= 0)
    {
        if (key == mat[row][col])
        {
            return true;
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
    return false;
}
int main()
{
    int m = 4, n = 4;
    vector<vector<int>> mat{
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}};

    int key = 4;
    cout << search(mat, key);

    return 0;
}