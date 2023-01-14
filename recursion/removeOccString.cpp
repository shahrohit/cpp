#include <iostream>
using namespace std;
string remStr(string str, int n, int idx = 0)
{
    if (idx == n)
        return "";
    string newStr = remStr(str, n, idx + 1);
    if (str[idx] != 'a')
        newStr = str[idx] + newStr;
    return newStr;
}
int main()
{
    string str = "abcaxaar";
    int n = str.size();
    cout << remStr(str, n);
    return 0;
}