#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
bool isPossible(vector<int> &arr, int n, int m, int mid)
{
}
int allocate(vector<int> arr, int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    int e = sum;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40};
    int n = arr.size();
    int s1 = 0, s2 = 0;
    int mx, sm = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        s1 = 0;
        s2 = 0;
        for (int j = 0; j <= i; j++)
        {
            s1 += arr[j];
        }
        for (int k = i + 1; k < n; k++)
        {
            s2 += arr[k];
        }
        mx = max(s1, s2);

        sm = min(sm, mx);
    }

    cout << sm;
    return 0;
}