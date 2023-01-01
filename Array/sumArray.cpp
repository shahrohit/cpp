// calculate the sum of all elements in an array
#include <iostream>
using namespace std;

int main()
{
    // method  1
    int arr[] = {1, 2, 3, 4, 8, 1, 2, 3, 6};
    int n = 9;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "sum = " << sum;

    return 0;
}
// Time complexity -> O(n)