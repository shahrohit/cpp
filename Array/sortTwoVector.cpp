// Given two vectors arrl[] and arr2[] of size m and n sorted in increasing order. Merge the
//  two arrays into a single sorted array of size m+n.

#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 6, 7, 10};
    int arr2[] = {0, 1, 3, 8, 11, 12, 15, 18};

    int m = 4, n = 8, i = 0, j = 0, k = 0;
    int arr[m + n];
    while (i < m and j < n)
    {

        if (arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }

    while (i < m)
    {
        // arr2 was exaushated and still arr1 have elements
        arr[k++] = arr1[i++];
    }
    while (j < n)
    {
        // arr1 was exaushated and still arr2 have elements
        arr[k++] = arr2[j++];
    }

    for (int num : arr)
    {
        cout << num << "\t";
    }
    return 0;
}