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
    // int m = 3, n = 2;
    // int mat[m][n] = {
    //     {1, 2},
    //     {4, 16},
    //     {3, 5}};
    int m = 4, n = 4;
    int mat[m][n] = {
        {1, 2, 3, 4},
        {4, 9, 7, 8},
        {3, 5, 2, 1},
        {0, 7, 8, 1}};
    int i = 0, j = 0;
    int left = 0, right = n - 1, top = 0, bottom = m - 1;

    while (top <= bottom)
    {
        // Iterator the top-left to top-right
        while (j <= right)
        {
            cout << mat[i][j] << " ";
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
            cout << mat[i][j] << " ";
            i++;
        }
        right--;
        j--;
        i--;
        // iterator from bottm-right to bottom-left
        while (j >= left)
        {
            cout << mat[i][j] << " ";
            j--;
        }

        bottom--;
        j++;
        i--;
        // iterator from botttom left to top-left
        while (i >= top)
        {
            cout << mat[i][j] << " ";
            i--;
        }
        left++;
        j++;
        i++;
    }

    return 0;
}