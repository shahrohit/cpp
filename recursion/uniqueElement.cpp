#include <iostream>
using namespace std;
int unique(int *arr, int n, int idx = 0)
{
    if (idx == n)
        return 0;

    return arr[idx] ^ unique(arr, n, idx + 1);
}
int unique2(int *arr, int size)
{

    int res = 0;
    for (int i = 0; i < size; i++)
        res ^= arr[i];
    return res;
}
int main()
{
    int m = 3;
    int arr[] = {2, 3, 1, 6, 3, 6, 1};
    cout << unique(arr, 2 * m + 1) << endl; // using recursion
    cout << unique2(arr, 2 * m + 1);        // without using recursion

    return 0;
}