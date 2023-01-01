#include <iostream>
using namespace std;
void sort(int arr, int n)
{
}
int main()
{
    int arr[] = {5, 1, 8, 17, 2, 0, 6, 10, 14, 3}, n = 10;
    // cout << "Enter the value of n : ";
    // cin >> n;

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int elem : arr)
    {
        cout << elem << "\t";
    }
    return 0;
}