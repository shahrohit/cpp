#include <iostream>
using namespace std;
void swap2(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x = 2, y = 3;
    swap2(&x, &y);
    cout << "x = " << x << "\t y = " << y;

    return 0;
}