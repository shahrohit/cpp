#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        arr[i] = sum;
    }

    for (int i : arr)
    {
        cout << i << "\t";
    }
    return 0;
}