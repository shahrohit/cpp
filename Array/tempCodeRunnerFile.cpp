#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-2, -1, 0, 2, 5};
    int n = 5;
    int i = 0;
    int j = n - 1;
    int k = n - 1;
    int sq[n];
    while (i <= j)
    {
        if (arr[i] * arr[i] >= arr[j] * arr[j])
        {
            sq[k--] = arr[i] * arr[i];
            i++;
        }
        else
        {
            sq[k--] = arr[j] * arr[j];
            j--;
        }
    }
    for (int num : sq)
    {
        cout << num << " ";
    }
    return 0;
}