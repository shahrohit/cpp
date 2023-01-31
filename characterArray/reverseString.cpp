#include <iostream>
#include <vector>
using namespace std;
// char vector
void reverse(vector<char> &str)
{
    int s = 0, e = str.size() - 1;
    while (s < e)
    {
        swap(str[s++], str[e--]);
    }
}

// using string
void reverseString(string &myStr)
{
    int s = 0, e = myStr.length() - 1;
    while (s < e)
    {
        swap(myStr[s++], myStr[e--]);
    }
}
int main()
{
    vector<char> str{'r', 'o', 'h', 'i', 't'};
    reverse(str);
    for (char ans : str)
    {
        cout << ans;
    }
    cout << endl;

    string myStr = "rohit";
    reverseString(myStr);
    cout << myStr;
    return 0;
}