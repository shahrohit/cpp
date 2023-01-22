#include <iostream>
using namespace std;
string binary(int n, string str = "")
{

    if (n == 0)
    {
        return str;
    }

    // string rem = (string)(n % 2);
    if (n % 2)
        str = "1" + str;
    else
        str = "0" + str;
    // str = (string)rem + str;
    return binary(n / 2, str);
}
int main()
{
    int n = 73;

    cout << binary(n);
    return 0;
}