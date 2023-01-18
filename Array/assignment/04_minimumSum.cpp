// Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
//  that they belong to different arrays and are not at the same index.

#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int a[] = {2, 6, 10, 4, 9}, b[] = {1, 2, 3, 4, 5}, n = 5;
    int small = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (a[i] + b[j] < small)
                small = a[i] + b[j];
        }
    }
    cout << small;
    return 0;
}