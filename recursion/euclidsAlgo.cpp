
#include <iostream>
using namespace std;
int min(int a, int b)
{
    return a < b ? a : b;
}
int max(int a, int b)
{
    return a > b ? a : b;
}
// using substraction method
int f(int x, int y)
{
    if (x == y)
        return x;

    return f(min(x, y), max(x, y) - min(x, y));
}
// using remider method
int f2(int x, int y)
{
    if (y > x)
        return f2(y, x);
    if (y == 0)
        return x;
    return f2(y, x % y);
}
int main()
{
    int x = 12, y = 20;
    cout << f(x, y) << endl;
    cout << f2(x, y);
    return 0;
}