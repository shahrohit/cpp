#include <iostream>
using namespace std;
int sum(int n, int m)
{

    if (m == 1)
        return n * (n + 1) / 2;

    int s = sum(n, m - 1);
    return s * (s + 1) / 2;
}
int main()
{
    int n = 3, m = 2;
    cout << sum(n, m);
    return 0;
}