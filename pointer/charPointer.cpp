#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5}; // interger array
    char ch[] = "abcde";         // character array

    cout << arr << endl; // address of 0th index
    cout << ch << endl;  // whole string

    char *ptr = &ch[0];
    cout << ptr << endl;

    char temp = 'z';
    char *p = &temp;
    cout << "z : " << p << endl;

    return 0;
}