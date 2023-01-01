#include <iostream>
using namespace std;
void occ(string str, char ch, int *first, int *last)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ch)
        {
            *first = i;
            break;
        }
    }
    for (int i = str.size() - 1; i >= 0; i--)
    {
        if (str[i] == ch)
        {
            *last = i;
            break;
        }
    }
}
int main()
{
    string str = "abcd";

    char ch = 'a';

    int first = -1, last = -1;

    occ(str, ch, &first, &last);
    cout << first << " " << last;
    return 0;
}