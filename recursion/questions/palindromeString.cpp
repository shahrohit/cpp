#include <iostream>
using namespace std;
bool isPalindrome(string &str, int &n, int start = 0)
{
    if (start >= n - start)
        return true;
    if (str[start] != str[n - start])
        return false;
    isPalindrome(str, n, start + 1);
}
int main()
{
    string str = "nitin";
    int n = str.length() - 1;
    cout << isPalindrome(str, n, 0);

    return 0;
}