#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 1)
        return 1;

    return sum(n - 1) + (n % 2 == 0 ? -n : n);
}
int main()
{
    int n = 4;
    cout << sum(n);

    return 0;
}