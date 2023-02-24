#include <iostream>
using namespace std;
int sumArr(int *arr, int n)
{
    if (n == 0)
        return 0;

    return arr[0] + sumArr(arr + 1, n - 1);
}
int main()
{
    int arr[] = {1, 9, 3, 4, 6};
    int n = 5;
    cout << sumArr(arr, n);
    return 0;
}