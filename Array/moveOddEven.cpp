#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5,1,0,4,8,1,8,7};
    int n = 8;
    int left = 0, right = n - 1;

    while (left < right)
    {
        if (arr[left] % 2 != 0 && arr[right] % 2 == 0)
        {
            int temp = arr[left];
            arr[left++] = arr[right];
            arr[right++] = temp;
        }
        if (arr[left] % 2 == 0)
        {
            left++;
        }
        if (arr[right] % 2 != 0)
        {
            right--;
        }
    }

    for (int i : arr)
    {
        cout << i << "\t";
    }

    return 0;
}