#include <iostream>
using namespace std;
int main()
{
// cout<<4+ 42+ 27+ 16+ 28+ 3+ 4+ 5+ 9+ 3+ 31+ 5+ 5+ 29+ 10+ 18+ 35+ 35+ 33+ 19<<endl;
// cout<<23+ 8+ 32+ 9+ 5+ 8+ 18+ 35+ 13+ 6+ 7+ 6+ 10+ 11+ 13+ 37+ 2+ 25+ 7+ 28+ 43;
    int a[] = {4, 42, 27, 16, 28, 3, 4, 5, 9, 3, 31, 5, 5, 29, 10, 18, 35, 35, 33, 19, 41, 23, 8, 32, 9, 5, 8, 18, 35, 13, 6, 7, 6, 10, 11, 13, 37, 2, 25, 7, 28, 43};
    int n = 42;
    int left = 0, right = n - 1;
    int sum = a[left] - a[right];
    while (right - left > 2)
    {
        if (sum < 0)
            sum += a[++left];
        if (right - left == 2)
            break;
        if (sum >= 0)
            sum -= a[--right];
    }
    if (right - left == 2 && sum==0)
        cout << right;
    else
        cout << -1;

    return 0;
}