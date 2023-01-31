#include <iostream>
using namespace std;
bool palindrome(string str)
{

    int s = 0, e = str.length() - 1;
    while (s <= e)
    {
        if (tolower(str[s++]) != tolower(str[e--]))
            return false;
    }
    return true;
}
// check palindrom where ignore  special character and only consider albhanumeric character
bool palindrome2(string str)
{

    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'a' and str[i] <= 'z' || (str[i] >= 'A' and str[i] <= 'Z') || (str[i] >= '0' and str[i] <= '9')))
        {
            temp.push_back(tolower(str[i]));
        }
    }

    int s = 0, e = temp.length() - 1;
    while (s <= e)
    {
        if (temp[s++] != temp[e--])
            return false;
    }
    return true;
}
int main()
{
    string str = "N2 i&nJA7a& jnI2n";

    cout << palindrome2(str);

    return 0;
}