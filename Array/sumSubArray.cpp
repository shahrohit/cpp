#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            // sum += arr[j];
            // cout << sum << " ";
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    return 0;
}