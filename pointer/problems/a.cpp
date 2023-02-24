#include <iostream>
using namespace std;

void fun(int arr[])
{
    cout << arr[0] << " ";
}
void update(int *p)
{
    int a = 70;
    p = &a;
    *p = (*p) * (*p);
    cout << a << " ";
}
int main()
{
    /*
    int a[] = {1, 2, 3};
    // int *p = (a + 1);
    // cout << *p + 9;
    int i = 2;
    cout << a[i] << endl; // -> a[i] = *(arr + i)
    cout << i[a] << endl; // -> i[a] = *(i + arr)

    // char ch[] = "xyz";
    // char *c = &ch[0];
    // cout << c;

    */

    // int arr[] = {11, 12, 13, 14};

    // fun(arr + 1);
    // cout << arr[0];

    int a = 70;
    update(&a);
    cout << a;
    return 0;
}