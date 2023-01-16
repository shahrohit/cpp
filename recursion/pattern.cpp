// n, n-5, n-10, …, 0, 5, 10, …, n-5, n
// There should be 0 or at most one occurrence of negative number in the series.

#include <iostream>
using namespace std;

void pattern(int n, int factor = 0)
{
    int a = n - 5 * factor;
    cout << a << " ";
    if (a <= 0)
        return;
    pattern(n, factor + 1);
    cout << a << " ";
}
int main()
{
    int n = 10;
    pattern(n);
    return 0;
}