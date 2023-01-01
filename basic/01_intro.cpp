#include <iostream>
using namespace std;
int main()
{
    // int x = 20;
    // cout << sizeof(x);

    // char ch = 'a';
    // cout << ch;

    // char c = 97;
    // cout << c;

    // int a = 'a';
    // cout << a;

    // char ch1 = 12345;
    // cout << ch1;
    // int c1 = '9';
    // cout << c1;

    // cout << 2 / 5 << endl; // 0

    // cout << 2.0 / 5 << endl; // 0.4

    // cout << (float)(2 / 5) << endl; // 0

    // cout << (float)2 / 5 << endl; // 0.4
    /*

        int a = 2;
        int b = a + 1;

        if ((a = 3) == b)
        {
            cout << "hii";
        }
        else
        {
            cout << "hello";
        }
    */
    char ch = '3';
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lower case";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Upper case";
    }
    else if (ch >= '1' and ch <= '9')
    {
        cout << "number";
    }
    return 0;
}