#include <iostream>
using namespace std;
bool binarySearch(int *arr, int &key, int end, int start = 0)
{
    int mid = start + ((end - 1) - start) / 2;

    if (key == *(arr + mid))
        return true;
    if (start >= end)
        return false;
    else if (key > arr[mid])
    {
        binarySearch(arr, key, end, mid + 1);
    }
    else
    {
        binarySearch(arr, key, mid, start);
    }
}
int main()
{
    int arr[] = {1, 5, 7, 8, 12, 15, 16, 18, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 19;
    cout << binarySearch(arr, key, n);
    return 0;
}