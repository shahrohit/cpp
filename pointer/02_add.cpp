#include <iostream>
using namespace std;
int main()
{
    int x = 2, y = 3;
    int *ptr1 = &x, *ptr2 = &y;

    int sum = *ptr1 + *ptr2;

    cout << sum;

    return 0;
}