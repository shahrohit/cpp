#include <iostream>
using namespace std;
bool check(int arr[], int n)
{
    int left = 0, right = n - 1;
    int sum = arr[left++] - arr[right--];

    while (left <= right)
    {
        if (sum > 0)
        {
            sum -= arr[right--];
        }

        if (sum < 0)
        {
            sum += arr[left++];
        }

        if (sum == 0 && left - right == 1)
        {
            return true;
        }
        if (sum == 0)
        {
            sum = arr[left++] - arr[right--];
        }
    }
    return false;
}
int main()
{
    int arr[] = {1, 1, 5, 0, 5, 1};
    cout << check(arr, 6);
    return 0;
}