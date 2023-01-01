#include <iostream>
using namespace std;
int main()
{
    // int arr[] = {10, 2, 3};
    // int *ptr = arr;

    // cout << ptr << " " << *ptr << endl;

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << *(arr + i) << " ";
    // }

    int a[] = {10, 11, 12};
    int(*p)[3] = &a;

    // cout << p[1] << " " << &a[2];

    return 0;
}