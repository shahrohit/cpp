#include <iostream>
using namespace std;

void printSubArraysRecursive(int arr[], int start, int end)
{
    // base case
    if (start > end)
    {
        return;
    }
    // print current subarray
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // recursively call function for next subarray
    printSubArraysRecursive(arr, start, end - 1);
    printSubArraysRecursive(arr, start + 1, end);
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "All subarrays of the given array are: " << endl;
    printSubArraysRecursive(arr, 0, n - 1);
    return 0;
}
