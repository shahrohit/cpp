#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[] = {1, -2, 3, 4, 5, -7};
    int n = 6;
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {

                sum += arr[k];
            }
            // cout << sum << endl;
            if (sum > max)
            {
                max = sum;
            }
        }
    }
    cout << max;
    return 0;
}