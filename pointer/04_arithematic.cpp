// there are two type artithematic operator
// -> increment and Decrement which is diffrent than normal increment and decrement operation
// -> inrement/decrement -> increment/decrement the pointer by size of the data type

#include <iostream>
using namespace std;
int main()
{
    // int x = 2;
    // int *ptr = &x;
    // cout << ptr << endl;
    // cout << ptr + 1 << endl;
    // cout << ++ptr;

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int *ptr = &arr[0];

    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }

    return 0;
}