#include <iostream>
using namespace std;
void removeAdj(string &str)
{
    // abbaca
    int i = 0;
    while (i < str.length())
    {
        if (str[i] == str[i + 1])
        {
            str.erase(i, 2);
            i = i - 1;
        }
        else
            i++;
    }
}
int main()
{
    string str = "azxxzya";
    removeAdj(str);
    cout << str;
    return 0;
}