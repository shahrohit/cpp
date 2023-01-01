#include <iostream>

using namespace std;

int main()
{
    int arr[] = {3, 4, 6, 7, 1};
    int n = 5, count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == 7)
                count++;
        }
    }
    cout << count;
    return 0;
}