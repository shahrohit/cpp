#include <iostream>
using namespace std;
int sumArr(int *arr, int n, int idx = 0)
{
    if (idx == n - 1)
        return arr[idx];

    return arr[idx] + sumArr(arr, n, idx + 1);
}
int main()
{
    int arr[] = {1, 9, 3, 4, 0};
    int n = 5;
    cout << sumArr(arr, n);
    return 0;
}