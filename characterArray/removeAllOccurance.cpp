#include <iostream>
using namespace std;

string remove(string &str, string part)
{
    int len = part.length();
    int i = 0;
    string ans = "", sub;
    while (str[i] != '\0')
    {

        sub = str.substr(i, len);
        if (sub == part)
            i = i + len;
        else
            ans.push_back(str[i++]);
    }

    return ans;
}
// removing in the same string
void remove2(string &str, string part)
{

    while (str.length() != 0 and str.find(part) < str.length())
    {
        str.erase(str.find(part), part.length());
    }
}
int main()
{
    string str = "abcdefabcg";
    string part = "abc";
    string ans = remove(str, part);
    cout << ans << endl;
    remove2(str, part);
    cout << str;
    // cout << ans;

    return 0;
}