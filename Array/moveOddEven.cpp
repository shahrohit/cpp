#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 1, 0, 4, 5, 1, 8, 7};
    int n = 8;
    int left = 0, right = n - 1;
    while (left < right)
    {
        // if left elem is odd and right elem is even then swap
        if (arr[left] % 2 != 0 && arr[right] % 2 == 0)
            swap(arr[left++], arr[right++]);

        if (arr[left] % 2 == 0)
            left++;

        if (arr[right] % 2 != 0)
            right--;
    }

    for (int i : arr)
    {
        cout << i << "\t";
    }

    return 0;
}