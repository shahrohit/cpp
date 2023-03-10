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

// space complexity -> O(n) -> for n value there is n stack frame

// time complexity -> no. of time fun called X no of time one fuctin takes
//                 -> n X C = O(n)