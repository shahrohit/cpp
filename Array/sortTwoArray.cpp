#include <iostream>

using namespace std;

int main()
{
    int arr1[] = {1, 3, 5}, arr2[] = {2, 4, 6};
    int m = 3, n = 3;
    int arr[m + n];

    int i = 0, j = 0;
    while (j < m + n)
        if (arr1[i] < arr1[i] && arr1[i] < arr2[i + 1])
        {
            arr[j] = arr1[i];
            arr[j + 1] = arr2[i];
            j += 2;
        }

    return 0;
}