#include <iostream>

using namespace std;

int main()
{

    int arr[] = {2, 5, 2, 1, 8, 6, 4, 9, 0}, n = 9;
    int j;
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
            else
                break;
        }
        arr[j + 1] = temp;
    }

    for (int elem : arr)
    {
        cout << elem << "\t";
    }
    return 0;
}