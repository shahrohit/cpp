#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int arr[] = {-5, 0};
    int n = 2;
    int i = 0;
    int j = n - 1;
    int k = n - 1;
    int sq[n];
    while (i <= j)
    {
        if (abs(arr[i]) >= abs(arr[j]))
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