#include <iostream>

using namespace std;

int amstrong(int n)
{
    if (n == 0)
        return 0;
    int digit = n % 10;
    return (digit * digit * digit) + amstrong(n / 10);
}
int main()
{
    int n = 152;

    if (n == amstrong(n))
    {
        cout << "amstrong";
    }
    else
    {
        cout << "not amstrong";
    }

    return 0;
}