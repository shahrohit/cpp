#include <iostream>
using namespace std;
int f(int m, int n, int i = 0, int j = 0)
{
    if (i == m - 1 and j == n - 1)
        return 1;

    if (j >= n or i >= m)
        return 0;

    return f(m, n, i, j + 1) + f(m, n, i + 1, j);
}

int main()
{
    int m = 3, n = 2;
    int a = f(m, n);
    cout << a;
    return 0;
}