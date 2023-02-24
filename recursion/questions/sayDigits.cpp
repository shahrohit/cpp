#include <iostream>
using namespace std;

void say(int n, string *str)
{
    if (n == 0)
        return;

    say(n / 10, str);
    cout << str[n % 10] << " ";
}
int main()
{
    int n = 123;
    string str[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // cout << str[0];
    say(n, str);
    return 0;
}