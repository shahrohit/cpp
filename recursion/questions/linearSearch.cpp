#include <iostream>
using namespace std;
bool linearSearch(int *arr, int n, int &key)
{
    if (n == 0)
        return 0;
    if (arr[0] == key)
        return true;
    return linearSearch(arr + 1, n - 1, key);
}
int main()
{
    int arr[] = {1, 9, 3, 4, 6};
    int n = 5;
    int key = 3;
    cout << linearSearch(arr, n, key);
    return 0;
}