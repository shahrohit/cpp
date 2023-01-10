#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1)
        return 1;

    return n + sum(n - 1);
}
int main()
{
    int n = 10;
    cout << sum(n);
    return 0;
}

// space complexity -> O(n) -> for n value there is n stack frame

// time complexity -> no. of time fun called X no of time one fuctin takes
//                 -> n X C = O(n)