#include <iostream>
#include <limits.h>
using namespace std;
int max(int *arr, int n)
{
    int max = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {

            second = max;
            max = arr[i];
        }
        else if (arr[i] > second and arr[i] != max)
        {
            second = arr[i];
        }
    }
    return second;
}
int main()
{
    int arr[] = {4, 2, 5, 4, 3, 3, 5}, n = sizeof(arr) / sizeof(arr[0]);

    cout << max(arr, n) << endl;

    return 0;
}