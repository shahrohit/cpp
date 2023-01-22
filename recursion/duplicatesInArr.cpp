#include <iostream>
#include <vector>
using namespace std;
int duplicate(vector<int> &arr)
{

    vector<int> v(arr.size(), 0);
    for (int i = 0; i < arr.size(); i++)
    {
        v.at(arr[i])++;
    }

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == 2)
            return i;
    }
}

int main()
{
    int n = 5;

    vector<int> arr{1, 2, 3, 1, 4};
    cout << duplicate(arr);
    return 0;
}