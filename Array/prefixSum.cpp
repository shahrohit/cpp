#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 0, 9};
    int n = 9;

    for (int i = 1; i < n; i++)
        arr[i] += arr[i - 1];

    for (int i : arr)
    {
        cout << i << "\t";
    }
    return 0;
}