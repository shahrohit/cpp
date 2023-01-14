#include <iostream>
using namespace std;
int max(int *arr, int n, int idx = 0)
{
    if (idx == n - 1)
        return arr[idx];
    int result = max(arr, n, idx + 1);

    if (arr[idx] > result)
        result = arr[idx];
    return result;
}
int main()
{
    int arr[] = {3, 8, 1, 0, 9, 2, 16, 9};
    int n = 8;
    cout << max(arr, n);
    return 0;
}