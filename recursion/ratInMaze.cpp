#include <iostream>
#include <vector>
using namespace std;
bool isSafe(int x, int y, int n, vector<vector<bool>> &visited, vector<vector<int>> &m)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
    {
        return true;
    }
    else
        false;
}
void ratInMaze(vector<vector<int>> &m, int n, vector<string> &ans, vector<vector<bool>> visited, int srcx = 0, int srcy = 0, string path = "")
{
    if (srcx == n - 1 && srcy == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[srcx][srcy] = 1;

    // 4 choices - D, L, R, U

    // down
    if (isSafe(srcx + 1, srcy, n, visited, m))
    {
        path.push_back('D');
        ratInMaze(m, n, ans, visited, srcx + 1, srcy, path);
        path.pop_back();
    }

    // left
    if (isSafe(srcx, srcy - 1, n, visited, m))
    {
        path.push_back('L');
        ratInMaze(m, n, ans, visited, srcx, srcy - 1, path);
        path.pop_back();
    }

    // right
    if (isSafe(srcx, srcy + 1, n, visited, m))
    {
        path.push_back('R');
        ratInMaze(m, n, ans, visited, srcx, srcy + 1, path);
        path.pop_back();
    }
    // up
    if (isSafe(srcx - 1, srcy, n, visited, m))
    {
        path.push_back('U');
        ratInMaze(m, n, ans, visited, srcx - 1, srcy, path);
        path.pop_back();
    }
    visited[srcx][srcy] = 1;
}
int main()
{
    vector<vector<int>> m{
        {1, 1, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};

    vector<vector<bool>> visited(4, vector<bool>(4, 0));
    vector<string> ans;
    int n = 4;
    ratInMaze(m, n, ans, visited);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "\n";
    }
    return 0;
}