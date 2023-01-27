/// find the duplicate in array for size N where the elemets are in range [1,N-1] and one element is repeating
#include <iostream>
using namespace std;
int duplicate(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    int duplicate = sum - (n * (n - 1)) / 2;
    return duplicate;
}
int duplicate2(int *arr, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        ans ^= i;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 4, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << duplicate(arr, n) << endl;
    cout << duplicate2(arr, n);
    return 0;
}