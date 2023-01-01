// this is introduction to pointer
#include <iostream>
using namespace std;
int main()
{
    // int *a;
    // int b = 2;

    // a = &b;
    // cout << a << endl
    //      << b << endl;
    // cout << *a;

    int *ptr;
    cout << ptr << "\n";

    int marks = 80;
    ptr = &marks;
    cout << ptr;
    return 0;
}