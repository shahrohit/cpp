#include <iostream>
#include <vector>
using namespace std;

void revWord(vector<char> &str)
{
    int start = 0, end = 0, j;
    while (start < str.size())
    {
        for (j = start; str[j] != ' ' and j < str.size(); j++)
            end = j;

        while (start <= end)
            swap(str[start++], str[end--]);
        start = j + 1;
    }
}

int main()
{
    vector<char> str{'M', 'y', ' ', 'n', 'a', 'm', 'e', ' ', 'i', 's', ' ', 'r', 'o', 'h', 'i', 't'};
    revWord(str);
    for (char ch : str)
    {
        cout << ch;
    }
    return 0;
}