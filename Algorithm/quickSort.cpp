#include <iostream>
using namespace std;
int partion(float *arr, int s, int e)
{
    float pivrot = arr[s];
    int count = 0;
    for (int i = s; i <= e; i++)
    {
        if (arr[i] < pivrot)
            count++;
    }
    int pivortInd = s + count;

    swap(arr[s], arr[pivortInd]);

    int i = s, j = e;

    while (i < j)
    {
        if (arr[i] > pivrot && arr[j] < pivrot)
        {
            swap(arr[i++], arr[j--]);
        }
        else if (arr[i] < pivrot)
            i++;
        else if (arr[j] > pivrot)
            j--;
    }

    return pivortInd;
}
void quickSort(float arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partion(arr, s, e);
    // cout << p << "\n";
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}
int main()
{
    float arr[] = {0.13, 0.45, 0.2, 0.12, 0.5, 0.3}; // 0 1 2 3 4 5 6 7
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}