#include <iostream>
using namespace std;

int f(int x, int y, int count)
{
    if (count == 1)
        return 1;

    int max = f(x, y, count - 1);

    if (x % count == 0 and y % count == 0 and count > max)
    {
        return count;
    }
    return max;
}
int min(int x, int y)
{
    return (x < y) ? x : y;
}
int main()
{
    // cout << min(12, 20);
    cout << f(9, 7, min(12, 20));
    return 0;
}