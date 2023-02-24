#include <iostream>
using namespace std;
int main()
{

    // creating 2D array with dynamic memory allocation;
    int row = 4;
    int **arr = new int *[row];
    int *colums = new int[row]; // store colum for every row
    for (int i = 0; i < row; i++)
    {
        // creation of column for every row
        int col;
        cout << "Enter the col ";
        cin >> col;
        arr[i] = new int[col];
        colums[i] = col;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colums[i]; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colums[i]; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    // releasing memory for ever column
    for (int i = 0; i < colums[i]; i++)
    {

        delete[] arr[i];
    }
    // releasing memory for every row
    for (int i = 0; i < row; i++)
    {

        delete[] arr;
    }
    delete[] colums; // releasing memory for colums array
    return 0;
}