#include <iostream>
#include <vector>
using namespace std;
void powerSet(vector<int> &nums, vector<int> output, vector<vector<int>> &result, int index = 0)
{
    if (index >= nums.size())
    {
        result.push_back(output);
        return;
    }

    // exclude call
    powerSet(nums, output, result, index + 1);

    // include call
    output.push_back(nums[index]);
    powerSet(nums, output, result, index + 1);
}

int main()
{

    int n = 3;
    vector<vector<int>> result;
    vector<int> nums{1, 2, 3}, output;

    powerSet(nums, output, result);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}