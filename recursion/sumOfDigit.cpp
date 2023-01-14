#include <iostream>
using namespace std;
int sum(int n)
{
    if (n >= 0 and n <= 9)
        return n;

    return n % 10 + sum(n / 10);
}
int main()
{
    int num = 653;
    cout << sum(num);
    return 0;
}

// time comlexity O(d) where d is no of digit of number