#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character : ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
        cout << "Small case";
    else if (ch >= 'A' && ch <= 'Z')
        cout << "Capital case";
    else if (ch >= '1' && ch <= '9')
        cout << "Digits";
    else
        cout << "Character";
    return 0;
}