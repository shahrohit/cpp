#include <iostream>
#include <vector>
using namespace std;
void index(int *arr, int n, int key, vector<int> &result, int idx = 0)
{
    if (n == idx)
    {
        if (result.size() == 0)
            result.push_back(-1);
        return;
    }
    if (arr[idx] == key)
        result.push_back(idx);
    index(arr, n, key, result, idx + 1);
}
int main()
{
    int arr[] = {1, 2, 3, 2, 0};
    vector<int> result;
    int key = 2, n = 5;
    index(arr, 5, key, result);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}