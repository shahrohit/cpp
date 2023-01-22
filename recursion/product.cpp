#include <iostream>
using namespace std;
int product(int x, int y)
{
    // if x is less than y swap the numbers
    if (y > x)
        return product(y, x);
    // iteratively calculate y times sum of x
    else if (y != 0)
        return x + product(x, y - 1);
    // if any of the two numbers is zero return zero
    else
        return 0;
}
int main()
{
    int x = 9, y = 4;
    cout << product(x, y);
    return 0;
}