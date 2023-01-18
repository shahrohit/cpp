#include <iostream>
using namespace std;

int f(int *arr, int n, int x, int i = 0)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == x)
    {
        return i;
    }
    return f(arr, n, x, i + 1);
}
int f2(int *arr, int n, int x, int i = 0)
{
    if (i == n)
    {
        return -1;
    }
    int restArr = f2(arr, n, x, i + 1);

    if (restArr != -1)
    {
        return restArr;
    }
    if (arr[i] == x)
    {
        return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 8};
    int n = 5;
    int x = 3;
    cout << f2(arr, n, x);
    return 0;
}