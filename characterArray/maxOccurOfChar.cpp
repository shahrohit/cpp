#include <iostream>
#include <vector>
using namespace std;
char maxOccurance(string &str)
{
    vector<int> v(26, 0);
    for (int i = 0; i < str.length(); i++)
    {

        int val = tolower(str[i]) - 'a';
        v[val]++;
    }
    int index = 0;
    for (int i = 0; i < 26; i++)
    {
        if (v[i] > v[index])
            index = i;
    }
    return index + 'a';
}
int main()
{
    string str = "output";
    cout << maxOccurance(str);
    return 0;
}