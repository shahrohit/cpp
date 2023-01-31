#include <iostream>
using namespace std;
void compress(string &str)
{
    char ch = str[0];
    int n = 0, j = 0;
    int count = 1;
    string temp = "";
    // cout << to_string(count).size();
    // cout << str;
    while (n < str.length())
    {
        if (str[n + 1] == ch)
        {
            count++;
            n++;
        }
        else
        {
            (count == 1) ? temp = ch : temp = (ch + to_string(count));

            str.replace(j, count, temp);
            (count == 1) ? j = j + 1 : j = j + 2;
            n = j;
            ch = str[j];
            count = 1;
        }
    }
}
int main()
{
    string str = "aabbbbbbbbbbbccdd";
    compress(str);
    cout << str;
    return 0;
}