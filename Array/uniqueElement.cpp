#include <iostream>

using namespace std;
int main()
{
    int arr[] = {1, 2, 5, 2, 1, 5, 3}, n = 7;
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1;
            }
        }
    }
    for (int ele : arr)
    {
        if (ele > -1)
            cout << ele;
    }
    return 0;
}