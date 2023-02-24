#include <iostream>
using namespace std;
int main()
{

    // int *arr = new int[5];
    // arr[0] = 5;
    // cout << arr[0];

    // delete[] arr;

    // creating 2D array with dynamic memory allocation;
    int row = 4, col = 2;
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        // creation of column for every row
        arr[i] = new int[col];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    // releasing memory for ever column
    for (int i = 0; i < col; i++)
    {

        delete[] arr[i];
    }
    // releasing memory for every row
    for (int i = 0; i < row; i++)
    {

        delete[] arr;
    }
    return 0;
}