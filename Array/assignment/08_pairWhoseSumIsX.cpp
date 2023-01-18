// Given a vector ar[] sorted in increasing ordor of n size and an intogor x, find if thoro oxists
// a pair in the array whose sum is exactly x.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5};
    int n = 4;
    bool exist = false;
    int i = 0, j = n - 1;
    int x = 2;

    while (i < j)
    {
        if (arr[i] + arr[j] > x)
        {
            j--;
        }
        if (arr[i] + arr[j] < x)
        {
            i++;
        }
        if (arr[i] + arr[j] == x && i < j)
        {
            exist = true;
            break;
        }
    }

    exist ? cout << " exist " : cout << " not exist ";

    return 0;
}

// while (n > 1 && arr[i] + arr[j] <= x && j > i)
// {
//     if (arr[i] + arr[j] == x)
//     {
//         exist = true;
//         break;
//     }

//     j++;
//     if (j == n)
//     {
//         j = ++i + 1;
//     }
// }

// exist ? cout << "Yes" : cout << "No";
// cout << i << " " << j;
