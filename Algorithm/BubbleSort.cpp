#include <iostream>

using namespace std;

int main()
{

    int arr[] = {10, 20, 40, 40, 50}, n = 5;

    int i, j;
    for (i = 1; i < n; i++)
    {
        bool swapped = false;
        for (j = 0; j < n - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swapped = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (swapped == false)
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