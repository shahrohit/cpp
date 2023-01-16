#include <iostream>
using namespace std;
bool isExist(int arr[], int n, int x, int idx = 0)
{

    if (idx == n)
        return false;

    return (arr[idx] == x) || isExist(arr, n, x, idx + 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    int x = 4;

    isExist(arr, n, x) ? cout << "Exist" : cout << "not";

    return 0;
}