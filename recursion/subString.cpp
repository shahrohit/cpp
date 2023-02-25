#include <iostream>
#include <vector>
using namespace std;
void f(string &str, vector<string> &result, int idx = 0, string sub = "")
{
    if (idx == str.size())
    {
        if (sub.length() != 0)
            result.push_back(sub);
        return;
    }

    f(str, result, idx + 1, sub + str[idx]);
    f(str, result, idx + 1, sub);
}
int main()
{
    string str = "abc";
    vector<string> result;
    int n = str.size();
    f(str, result);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}