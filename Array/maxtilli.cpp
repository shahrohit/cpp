#include <iostream>
using namespace std;

int main()
{

    int arr[] = {0, -9, 1, 3, -4, 5}, n = 6;
    int max = arr[0], sum = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
            max = arr[i];
        cout << max << endl;
    }

    return 0;
}
