#include <iostream>
#include <vector>
using namespace std;
void reverse(int *arr, int n)
{
    for (int i = 0; i < n / 2; i++)
        swap(arr[i], arr[n - 1 - i]);
}
// reverse the array after the certain position
void reverseArray(vector<int> &v, int m)
{
    int s = m + 1, e = v.size() - 1;
    while (s < e)
    {
        swap(v[s++], v[e--]);
    }
}
int main()
{
    int arr[] = {1, 5, 1, 9, 4, 6, 3, 2}, n = 8;

    reverse(arr, n);

    //
    vector<int> v{1, 5, 1, 9, 4, 6, 3, 2};
    reverseArray(v, 3);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}