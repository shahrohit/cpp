#include <iostream>
using namespace std;
void f1(int arr[]) // => void f1(int *arr){....}
{
    cout << "f1 : " << arr << endl;

    // cout << "size : " << sizeof(arr) << endl; // it will give size of poiner not the size of array
}

void f2(int *arr)
{
    cout << "f2 : " << arr << endl; // arr is not same as arr of f1()
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    cout << "main : " << arr << endl;
    f1(arr);
    f2(arr + 2); // passing array from second index
    return 0;
}