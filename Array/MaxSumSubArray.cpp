#include <iostream>
#include <limits.h>
using namespace std;
int main()
{

    int arr[] = {-1, 4, -6, 7, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    cout << maxSum;
    return 0;
}