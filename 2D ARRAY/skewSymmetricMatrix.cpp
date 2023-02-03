#include <iostream>
#include <vector>
using namespace std;

bool sym(vector<vector<int>> &mat)
{

    int m = mat.size();
    int n = mat[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (mat[i][j] != 0)
                {
                    return false;
                }
            }
            else if (mat[j][i] != -mat[i][j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    vector<vector<int>> mat{
        {0, 1, -2},
        {-1, 0, 3},
        {2, -3, 0}};

    cout << sym(mat);
    return 0;
}