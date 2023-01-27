#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;
    int ans = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (key > arr[mid])
            start = mid + 1;

        else if (key < arr[mid])
            end = mid - 1;
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;
    int ans = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (key > arr[mid])
            start = mid + 1;

        else if (key < arr[mid])
            end = mid - 1;
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1, 3, 3, 4, 5}, n = 5;

    int key = 3;

    cout << firstOcc(arr, n, key) << endl;
    cout << lastOcc(arr, n, key);

    return 0;
}