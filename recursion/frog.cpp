#include <iostream>
#include <math.h>
using namespace std;

int frogItr(int arr[], int n)
{
    int sum = 0, i = 0;
    if (n == 1)
        return arr[0];
    while (i < n - 1)
    {
        if (i == n - 2 or arr[i + 1] < arr[i + 2])
        {
            sum += abs(arr[i] - arr[i + 1]);
            i = i + 1;
        }
        else
        {
            sum += abs(arr[i] - arr[i + 2]);

            i = i + 2;
        }
    }
    return sum;
}

int frog(int arr[], int n, int i = 1)
{

    if (i == n - 1)
    {
        return arr[i];
    }
    int sum = 0;
    if (i == n - 2 or arr[i + 1] < arr[i + 2])
        sum = abs(arr[i] - frog(arr, n, i + 1));
    else
    {
        sum = abs(arr[i] - frog(arr, n, i + 2));
    }
    return sum;
}

int main()
{

    int arr[] = {10, 30, 40, 20};
    int n = 4;
    cout << frog(arr, n);

    return 0;
}