#include <iostream>
#include <vector>
using namespace std;
void f(string &str, vector<string> &result, string *mapping, int idx = 0, string sub = "")
{
    if (idx >= str.size())
    {
        // if (sub.length() != 0)
        result.push_back(sub);
        return;
    }

    int num = str[idx] - '0';
    string value = mapping[num];

    for (int i = 0; i < value.length(); i++)
    {
        sub.push_back(value[i]);
        f(str, result, mapping, idx + 1, sub);
        sub.pop_back();
    }
}
int main()
{
    string str = "234";
    vector<string> result;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    // cout << result.size();
    f(str, result, mapping);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}