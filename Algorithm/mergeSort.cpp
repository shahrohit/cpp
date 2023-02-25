#include <iostream>
using namespace std;
void merge(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1; // length of first array
    int len2 = end - mid;       // length of second array

    // creating array
    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrIndex = start;
    // inserting value in first array
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrIndex++];
    }

    // mainArrIndex = mid + 1;
    // inseting value in second array
    for (int i = 0; i < len2; i++)
        second[i] = arr[mainArrIndex++];

    // index of first and second array
    int index1 = 0;
    int index2 = 0;

    mainArrIndex = start;

    while (index1 < len1 and index2 < len2)
    {
        if (first[index1] < second[index2])
            arr[mainArrIndex++] = first[index1++];
        else
            arr[mainArrIndex++] = second[index2++];
    }

    while (index1 < len1)
        arr[mainArrIndex++] = first[index1++];
    while (index2 < len2)
        arr[mainArrIndex++] = second[index2++];

    delete[] first;
    delete[] second;
}
void mergerSort(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;

    if (start >= end)
    {
        return;
    }

    // left part sort
    mergerSort(arr, start, mid);

    // right
    mergerSort(arr, mid + 1, end);

    // merging two sorted array
    merge(arr, start, end);
}

int main()
{
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]) - 1;
    mergerSort(arr, 0, n);

    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}