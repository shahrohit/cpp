#include <iostream>
#include <vector>
using namespace std;
bool checkSortedRotated(vector<int> &arr)
{
    int count = 0;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }

    if (arr[arr.size() - 1] > arr[0])
        count++;

    return count <= 1;
}
int main()
{
    vector<int> arr = {1, 1, 1};
    cout << checkSortedRotated(arr);
    return 0;
}