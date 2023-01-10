#include <iostream>
using namespace std;

int fabonacci(int n)
{
    if (n == 1 or n == 0)
        return n;

    return fabonacci(n - 1) + fabonacci(n - 2);
}

int main()
{
    int n = 6;
    cout << fabonacci(n);
    return 0;
}

//  space -> O(n)
// time -> O(2^n)