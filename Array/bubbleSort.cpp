#include <iostream>

using namespace std;

int main()
{

    int arr[] = {2, 5, 2, 1, 8}, n = 5;

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int elem : arr)
    {
        cout << elem << "\t";
    }
    return 0;
}