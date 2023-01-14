#include <iostream>
using namespace std;

bool palindrome(int num, int *temp)
{
    if (num >= 0 and num <= 9)
    {
        int last = (*temp) % 10;
        (*temp) /= 10;
        return num == last;
    }
    bool result = palindrome(num / 10, temp) and num % 10 == (*temp % 10);
    (*temp) /= 10;
    return result;
}
int main()
{
    int num = 123241;
    int another = num;
    int *temp = &another;
    cout << palindrome(num, temp);
    return 0;
}
