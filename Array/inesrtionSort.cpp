#include <iostream>

using namespace std;

int main()
{

    int arr[] = {2, 5, 2, 1, 8, 6, 4, 9, 0}, n = 9;

    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[i])
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