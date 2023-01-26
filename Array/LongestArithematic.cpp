#include <iostream>
using namespace std;
int longestSubArr(int *arr, int n)
{
    int curr = 2;
    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    while (j < n)
    {
        if (arr[j] - arr[j - 1] == pd)
            curr++;
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        if (curr > ans)
            ans = curr;

        j++;
    }
    return ans;
}
int main()
{
    int arr[] = {10, 7, 4, 6, 8, 10, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << longestSubArr(arr, n);

    return 0;
}