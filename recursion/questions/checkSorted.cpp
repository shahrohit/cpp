#include <iostream>
using namespace std;

bool isSorted(int *arr, int n)
{
    if (n == 1 || n == 0)
        return true;
    if (arr[1] < arr[0])
        return false;

    return isSorted(arr + 1, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << isSorted(arr, n);
    return 0;
}