#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;
    for (int i = 0; i <= n / 3; i++)
    {
        mid = (start + end) / 2;
        if (key > arr[mid])
            start = mid + 1;

        else if (key < arr[mid])
            end = mid - 1;
        else
            return mid;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5}, n = 5;

    int key = 3;

    cout << binarySearch(arr, n, key);

    return 0;
}