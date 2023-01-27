#include <iostream>
using namespace std;
int peakElement(int arr[], int n)
{
    int start = 0, end = n - 1, mid;
    while (start < end)
    {
        mid = start + (end - start) / 2; // -> (start + end)/2

        if (arr[mid + 1] > arr[mid])
            start = mid + 1;

        else
            end = mid;
    }
    return start;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << arr[peakElement(arr, n)];
    return 0;
}