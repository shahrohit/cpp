#include <iostream>
using namespace std;
int factorail(int n)
{
    if (n == 1 or n == 0)
    {
        return 1;
    }
    return n * factorail(n - 1);
}
int main()
{
    unsigned int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << factorail(n);
    return 0;
}