// Given a vector ar[] sorted in increasing ordor of n size and an intogor x, find if thoro oxists
// a pair in the array whose sum is exactly x.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 5};
    int n = 4;
    bool exist = false;
    int i = 0, j = 1;
    int x = 3;

    while (n > 1 && arr[i] + arr[j] <= x && j > i)
    {
        if (arr[i] + arr[j] == x)
        {
            exist = true;
            break;
        }

        j++;
        if (j == n)
        {
            i++;
            j = 0;
        }
    }

    exist ? cout << "Yes" : cout << "No";
    cout << i << " " << j;
    return 0;
}