#include <iostream>
using namespace std;
void reverse(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}
int main()
{
    int arr[] = {1, 5, 1, 9, 4, 6, 3, 4}, n = 8;

    reverse(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}