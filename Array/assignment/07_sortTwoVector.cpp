// Given two vectors arrl[] and arr2[] of size m and n sorted in increasing order. Merge the
//  two arrays into a single sorted array of size m+n.

#include <iostream>
using namespace std;
void merge(int *a, int *b, int m, int n, int *res)
{
    int i = 0, j = 0, k = 0;
    while (i < m and j < n)
    {
        if (a[i] < b[j])
            res[k++] = a[i++];
        else
            res[k++] = b[j++];
    }
    // b was exaushated and still a have elements
    while (i < m)
        res[k++] = a[i++];
    // a was exaushated and still b have elements
    while (j < n)
        res[k++] = b[j++];
}
int main()
{
    int a[] = {1, 6, 7, 10};
    int b[] = {0, 1, 3, 8, 11, 12, 15, 18};
    int m = 4, n = 8;
    int res[m + n];
    merge(a, b, m, n, res);
    for (int num : res)
    {
        cout << num << "\t";
    }
    return 0;
}