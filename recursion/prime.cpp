#include <iostream>
using namespace std;
bool prime(int n, int idx = 2)
{
    if (idx == n)
        return true;

    if (n % idx == 0)
        return false;

    return prime(n, idx + 1);
}
int main()
{
    int n = 12;
    prime(n) ? cout << "prime" : cout << "not prime";

    return 0;
}