#include <iostream>

using namespace std;

int main()
{

    int arr[] = {10, 20, 40, 30, 50}, n = 5;
    int flag = true;
    int i, j;
    for (i = 1; i < n; i++)
    {
        bool flag = false;
        for (j = 0; j < n - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                flag = true;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (!flag)
            break;
    }
    for (int elem : arr)
    {
        cout << elem << "\t";
    }
    return 0;
}
// total no of swaps is n(n-1)/2 euivalent to n^2
//  time complexity - O(n^2)