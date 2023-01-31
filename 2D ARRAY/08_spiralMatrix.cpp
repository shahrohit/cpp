#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;

    // intilizing the size of matrix
    int row = matrix.size();
    int col = matrix[0].size();

    // initilizing count
    int count = 0;
    int total = row * col;

    // initilizing the indices
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingcol = col - 1;
    cout << total << "\n";
    while (count < total)
    {
        //  starting row
        for (int index = startingCol; count < total && index <= endingcol; index++)
        {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;
        //  ending col
        for (int index = startingRow; count < total && index <= endingRow; index++)
        {
            ans.push_back(matrix[index][endingcol]);
            count++;
        }
        endingcol--;
        //  ending row

        for (int index = endingcol; count < total && index >= startingCol; index--)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        // starting col
        for (int index = endingRow; count < total && index >= startingRow; index--)
        {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }

    return ans;
}

int main()
{
    // int m = 3, n = 4;
    vector<vector<int>> matrix{
        {1, 2, 3, 3},
        {4, 10, 6, 6},
        {7, 8, 9, 0}};

    // int m = 3, n = 3;
    // vector<vector<int>> matrix{
    //     {1, 2, 3},
    //     {4, 10, 6},
    //     {7, 8, 9}};
    // int m = 2, n = 2;
    // vector<vector<int>> matrix{
    //     {1, 2},
    //     {4, 16}};
    // vector<vector<int>> matrix{
    //     {1, 2},
    //     {4, 16},
    //     {3, 5}};
    // vector<vector<int>> matrix{
    //     {1, 2, 3, 4},
    //     {4, 9, 7, 8},
    //     {3, 5, 2, 1},
    //     {0, 7, 8, 1}};

    vector<int> ans = spiralOrder(matrix);

    for (int num : ans)
    {
        cout << num << " ";
    }

    return 0;
}