#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    // method 1;
    //  int a, b, n = 5;
    //  int k = 2;
    //  for (int i = 1; i <= k; i++)
    //  {
    //      a = arr[0];

    //     for (int j = 0; j < n - 1; j++)
    //     {
    //         b = arr[j + 1];
    //         arr[j + 1] = a;
    //         a = b;
    //     }
    //     arr[0] = b;
    // }

    // method2
    int k = 3, j = 0;
    k = k % n;

    int ansArr[n];
    for (int i = n - k; i < n; i++)
    {
        ansArr[j++] = arr[i];
    }

    for (int i = 0; i < n - k; i++)
    {
        ansArr[j++] = arr[i];
    }

    // printing
    for (int ele : ansArr)
    {
        cout << ele << "\t";
    }

    // method 3 => using vectors

    // -> {5,4,3,2,1} -> {4,5} {1,2,3}
    // vector<int> v = {1, 2, 3, 4, 5};
    // int k = 6;
    // k = k % v.size();

    // reverse(v.begin(), v.end());
    return 0;
}