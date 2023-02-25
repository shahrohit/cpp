#include <iostream>
#include <vector>
using namespace std;
void permutation(string &str, vector<string> &result, int idx = 0)
{
    if (idx >= str.size())
    {
        result.push_back(str);
        return;
    }

    for (int i = idx; i < str.size(); i++)
    {
        swap(str[idx], str[i]);
        permutation(str, result, idx + 1);
        // backtrack
        swap(str[idx], str[i]);
    }
}
int main()
{
    string str = "abc";
    vector<string> result;

    permutation(str, result);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}