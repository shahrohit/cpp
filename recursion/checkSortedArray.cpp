#include <iostream>
using namespace std;

bool f(int *arr, int n, int idx = 0)
{
    if (idx == n - 1)
        return true;
    if (arr[idx + 1] < arr[idx])
        return false;

    return f(arr, n, idx + 1);
}

int main()
{
    int arr[] = {1, 2, 2, 4, 1};
    int n = 5;

    cout << f(arr, n);
    return 0;
}