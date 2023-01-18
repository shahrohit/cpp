#include <iostream>
#include <math.h>
using namespace std;

// normal approach
float power(int p, int q)
{
    if (q == 0)
        return 1;
    else if (q > 0) // if q is positive
        return p * power(p, q - 1);
    else // if q is negative
        return (1.0 / p) * power(p, q + 1);
    //  time complexity O(q)
    //  sapce complexity O(q)
}
// optimized approach
// even +ve power -> 2^4 -> (2^2) * (2^2)
// even -ve power -> 1 / (2^4)
// odd  +ve power -> 2^7 -> 2 * (2^3) * (2^3)
// odd  -ve power -> 1 /(2^7)
float power2(int p, int q)
{
    if (q == 1)
        return p;
    int result;
    if (q % 2 == 0)
    { // checking for even
        result = power2(p, abs(q) / 2);
        if (q < 0) // for -ve power
            return (1.0 / (result * result));
        else // for +ve power
            return (result * result);
    }
    else
    { // for odd
        result = power2(p, (abs(q) - 1) / 2);
        if (q < 0) // for -ve power
            return (1.0 / (p * result * result));
        else // for +ve power
            return (p * result * result);
    }
    // time complexity O(log(q))
}
int main()
{
    int p = 10, q = -2;
    // cout << power(p, q) << endl;
    cout << power2(p, q);
    return 0;
}