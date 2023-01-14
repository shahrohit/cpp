// Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of
//  both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 4;
    int arr[] = {2, 0, 3, 4};
    int result[n + 1];

    int missing = -1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int range_sum = (n) * (n + 1) / 2;
    missing = range_sum - sum;
    cout << missing;

    return 0;
}