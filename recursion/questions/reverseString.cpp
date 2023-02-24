#include <iostream>
using namespace std;
void reverse(string &str, int &n, int start = 0)
{
    if (start >= n - start)
        return;
    swap(str[start], str[n - start]);
    reverse(str, n, start + 1);
    return;
}
int main()
{
    string str = "shah";
    int n = str.length() - 1;
    reverse(str, n, 0);
    cout << str;
    return 0;
}