#include <iostream>
#include <limits.h>
using namespace std;
int max(int arr[], int n)
{
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[index])
        {
            index = i;
        }
    }
    return index;
}
int main()
{
    int arr[] = {5, 1, 8, 17, 2, 0, 6, 10, 14, 22, 3}, n = 11;
    int index = max(arr, n);
    arr[index] = INT_MIN;

    cout << arr[max(arr, n)] << endl;

    return 0;
}