#include <iostream>
using namespace std;
void swapArr(int *arr, int n, int idx = 0)
{
    if (idx >= n - 1)
        return;

    swap(arr[idx], arr[idx + 1]);
    swapArr(arr, n, idx + 2);
}
int main()
{

    int arr[] = {1, 2, 7, 8, 9, 0, 10, 11};
    int n = 8;
    swapArr(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}