#include <iostream>
using namespace std;
int maxLength(int *arr, int n)
{
    int length = 0;
    int zero = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0) // counting for zeros
            zero++;
        else // counting for one
            one++;

        if (zero == one)
            length = i + 1;
    }
    return length;
}
int main()
{
    int arr[] = {0, 1, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxLength(arr, n);
    return 0;
}