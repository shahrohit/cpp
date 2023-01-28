#include <iostream>
using namespace std;
int binarySearch(int arr[], int s, int e, int key)
{
    int start = s, end = e, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2; // -> (start + end)/2
        if (key > arr[mid])
            start = mid + 1;

        else if (key < arr[mid])
            end = mid - 1;
        else
            return mid;
    }
    return -1;
}
int pivort(int arr[], int n)
{
    int start = 0, end = n - 1, mid;
    while (start < end)
    {
        mid = start + (end - start) / 2; // -> (start + end)/2

        if (arr[0] > arr[mid])
            end = mid;

        else
            start = mid + 1;
    }
    return start;
}
int search(int arr[], int n, int key)
{
    int p = pivort(arr, n);

    if (key >= arr[p] and key <= arr[n - 1])
        return binarySearch(arr, p, n - 1, key);
    else
    {
        return binarySearch(arr, 0, p - 1, key);
    }
}
int main()
{
    // int arr[] = {4, 5, 6, 7, 8, 1};
    int arr[] = {3, 8, 10, 17, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << search(arr, n, 2);
    return 0;
}