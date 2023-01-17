#include <iostream>
using namespace std;
void f(int *arr, int n, int idx = 0, int sum = 0)
{
    if (idx == n)
    {
        cout << sum << endl;
        return;
    }

    f(arr, n, idx + 1, sum + arr[idx]);
    f(arr, n, idx + 1, sum);
}
int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;
    f(arr, n);
    return 0;
}