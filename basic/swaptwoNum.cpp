#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = -1;
    int c;

    // c = b;
    // b = a;
    // a = c;

    b = a + b;
    a = b - a;
    b = b - a;

    cout << "new value of a is : " << a << endl;
    cout << "new value of b is : " << b << endl;

    // cout<<"new value of a is : "<<a<

    return 0;
}