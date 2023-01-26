#include <iostream>
using namespace std;
int recordBreaker(int *arr, int n)
{
    int mx = -1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > mx and (i == n - 1 or arr[i] > arr[i + 1]))
        {
            mx = arr[i];
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {1, 2, 0, 7, 2, 0, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << recordBreaker(arr, n);
    return 0;
}