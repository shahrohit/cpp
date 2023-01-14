#include <iostream>
using namespace std;
void printArr(int arr[], int n, int idx = 0)
{
    if (idx == n)
        return;
    cout << arr[idx] << " ";
    printArr(arr, n, idx + 1);
    return;
}
int main()
{
    int arr[] = {4, 7, 1, 0, 8};
    int n = 5;
    printArr(arr, n);
    return 0;
}

// time complexity O(n)
// space complexity O(n)