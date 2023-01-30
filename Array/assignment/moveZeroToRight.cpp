#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 0, 0, 12, 0, 13, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int nonZeroIndex = 0;

    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[nonZeroIndex]);
            nonZeroIndex++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}