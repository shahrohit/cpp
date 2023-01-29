#include <iostream>
using namespace std;
void sort(int arr, int n)
{
}
int main()
{
    int arr[] = {5, 2, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << "Enter the value of n : ";
    // cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }

    for (int elem : arr)
    {
        cout << elem << "\t";
    }
    return 0;
}