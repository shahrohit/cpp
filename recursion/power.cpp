#include <iostream>
using namespace std;

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
int power2(int p, int q)
{
    if (q == 1)
        return p;
    int result;
    if (q % 2 == 0)
    {

        result = power2(p, q / 2);
        return result * result;
    }
    else
    {
        result = power2(p, (q - 1) / 2);
        return p * result * result;
    }

    // time complexity O(log(q))
}
int main()
{
    int p = 10, q = 3;
    cout << power(p, q) << endl;
    cout << power2(p, q);
    return 0;
}