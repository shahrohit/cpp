#include <iostream>
using namespace std;

int count(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n < 0)
        return 0;

    return count(n - 1) + count(n - 2);
}
int main()
{
    int n = 4;
    cout << count(n);
    return 0;
}