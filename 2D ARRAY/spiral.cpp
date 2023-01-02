#include <iostream>
#include <vector>

using namespace std;

// Function to print the elements of the matrix in spiral order
void printSpiral(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    // Initialize variables to keep track of current position
    int i = 0, j = 0;
    int di = 0, dj = 1;

    // Visit all elements of the matrix
    for (int k = 0; k < m * n; k++)
    {
        // Print the current element
        cout << matrix[i][j] << " ";

        // Update the current position
        matrix[i][j] = 0;
        int ni = i + di, nj = j + dj;

        // Check if the new position is valid
        if (ni >= 0 && ni < m && nj >= 0 && nj < n && matrix[ni][nj])
            i = ni, j = nj;
        else
        {
            // Change direction
            if (di == 0)
                di = dj, dj = 0;
            else
                dj = -di, di = 0;
            i += di, j += dj;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    printSpiral(matrix);

    return 0;
}
