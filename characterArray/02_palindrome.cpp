#include <iostream>
using namespace std;
int main()
{
    char arr[100] = "nitin";
    int n = 0;
    for (n = 0; arr[n] != '\0'; n++)
        ;
    bool isPalindrome = true;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }
    cout << "'" << arr << "'";
    isPalindrome ? cout << " is palindrome " : cout << " is not palindrome";
    return 0;
}