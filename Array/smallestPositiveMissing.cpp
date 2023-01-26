#include <iostream>
#include <vector>
using namespace std;
int missing(int *arr, int n)
{
    int N = 1e6 + 2;
    vector<bool> miss(N, 0);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            miss.at(arr[i]) = 1;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (miss[i] == 0)
        {

            return i;
        }
    }
}
int main()
{

    int arr[] = {0, 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << missing(arr, n);
    return 0;
}