#include <iostream>
using namespace std;
void sequence(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }
    sequence(n - 1);
    cout << n << " ";
    return;
}
int main()
{
    int n = 10;
    sequence(n);
    return 0;
}