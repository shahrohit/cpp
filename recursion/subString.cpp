#include <iostream>
using namespace std;
void f(string &str, int idx = 0, string sub = "")
{
    if (idx == str.size())
    {
        cout << sub << endl;
        return;
    }

    f(str, idx + 1, sub + str[idx]);
    f(str, idx + 1, sub);
}
int main()
{
    string str = "abc";
    int n = str.size();
    f(str);
    return 0;
}