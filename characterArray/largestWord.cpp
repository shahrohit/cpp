#include <iostream>
using namespace std;
string largeset(string &sentence)
{
    int i = 0, j = 0;
    int count = 0;
    int start = 0, end = 0;
    string str = "";
    for (j; sentence[j] != '\0'; j++)
    {

        if (sentence[j] == ' ')
        {
            if (count > end - start)
            {
                start = i;
                end = j;
            }
            i = j + 1;
            count = 0;
        }
        else
            count++;
    }
    for (int i = start; i < end; i++)
    {
        str += sentence[i];
    }
    return str;
}
int main()
{
    string sentence = "my nameaaa is rohit kumara shah";
    string ans = largeset(sentence);
    cout << ans;
    return 0;
}