#include <iostream>
using namespace std;
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
int main()
{
    // int arr[] = {4, 5, 6, 7, 8, 1};
    int arr[] = {3, 8, 10, 17, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << arr[pivort(arr, n)];
    return 0;
}