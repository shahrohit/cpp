#include <iostream>
using namespace std;
int diff(int *arr, int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
        res = (i % 2 == 0) ? res + arr[i] : res - arr[i];
    return res;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    cout << diff(arr, n);
    return 0;
}