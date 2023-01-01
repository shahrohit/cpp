#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[] = {1, -6, 2, 8, 4, 2}, n = 6;
    int small = INT_MAX, great = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > great)
            great = arr[i];
        if (arr[i] < small)
            small = arr[i];
    }
    cout << "sum : " << great + small;
    return 0;
}