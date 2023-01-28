#include <iostream>
using namespace std;

int sqroot(int num)
{
    int start = 0, end = num;
    long long int mid;
    int ans = 0;
    while (start <= end)
    {
        mid = start + (end - start) / 2; // -> (start + end)/2
        if (mid * mid > num)
            end = mid - 1;

        else if (mid * mid < num)
        {
            ans = mid;
            start = mid + 1;
        }

        else
            return mid;
    }
    return ans;
}
double sqdecimal(int n, int pre, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < pre; i++)
    {

        factor /= 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n = 37;
    int tempSol = sqroot(n);
    cout << sqdecimal(n, 3, tempSol);

    return 0;
}