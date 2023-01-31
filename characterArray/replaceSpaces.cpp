// replace spaces with @40

#include <iostream>
#include <vector>
using namespace std;

string replace(string &str)
{

    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

void replace2(string &str)
{
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str[i++] = '@';
            str.insert(str.begin() + i++, '4');
            str.insert(str.begin() + i, '0');
        }
    }
}
int main()
{
    string str = "my name is rohit";

    // string ans = replace(str);

    replace2(str);
    cout << str;
    // cout << ans << endl;
    // for (char ch : str2)
    // {
    //     cout << ch;
    // }
    return 0;
}