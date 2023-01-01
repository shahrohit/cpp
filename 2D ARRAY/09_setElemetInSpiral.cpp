#include <iostream>
using namespace std;
int main()
{
    // int m = 3, n = 4;
    // int mat[m][n] = {
    //     {1, 2, 3, 3},
    //     {4, 10, 6, 6},
    //     {7, 8, 9, 0}};

    // int m = 3, n = 3;
    // int mat[m][n] = {
    //     {1, 2, 3},
    //     {4, 10, 6},
    //     {7, 8, 9}};
    // int m = 2, n = 2;
    // int mat[m][n] = {
    //     {1, 2},
    //     {4, 16}};
    int n = 4;
    int mat[n][n];

    int i = 0, j = 0;
    int left = 0, right = n - 1, top = 0, bottom = n - 1;
    int a = 1;
    while (top <= bottom && a <= n * n)
    {
        // Iterator the top-left to top-right
        while (j <= right)
        {
            mat[i][j] = a++;
            j++;
        }

        top++;
        j--;
        i++;
        if (top > bottom)
            break;

        // iterate from right-top to right-bottom
        while (i <= bottom)
        {
            mat[i][j] = a++;
            i++;
        }
        right--;
        j--;
        i--;
        // iterator from bottm-right to bottom-left
        while (j >= left)
        {
            mat[i][j] = a++;
            j--;
        }

        bottom--;
        j++;
        i--;
        // iterator from botttom left to top-left
        while (i >= top)
        {
            mat[i][j] = a++;
            i--;
        }
        left++;
        j++;
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
