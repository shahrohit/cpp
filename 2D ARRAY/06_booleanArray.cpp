
#include <iostream>
using namespace std;

int main()
{
    int row = 3, col = 4;
    bool matrix[row][col] = {
        {0, 1, 1, 1},
        {0, 1, 1, 1},
        {1, 0, 1, 1}};
    int max = col, index = -1;

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == 1)
            {

                if (j < max)
                {
                    index = i;
                    max = j;
                    break;
                }
            }
        }
    }
    cout << index;
    // int max = 0, index = -1;
    // for (int i = 0; i < row; i++)
    // {

    //     for (int j = 0; j < col; j++)
    //     {
    //         if (matrix[i][j] == 1)
    //         {
    //             // max = col - j;
    //             // cout << max;
    //             if (col - j > max)
    //             {
    //                 max = col - j;
    //                 index = i;
    //                 break;
    //             }
    //         };
    //     }
    // }
    // cout << index;
    return 0;
}