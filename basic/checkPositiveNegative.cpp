#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter a number : ";
    cin >> num;

    if (num > 0)
        cout << num << " is a positive number." << endl;

    else if (num < 0)
        cout << num << " is a negative number." << endl;

    else
        cout << num << " is a neutral number." << endl;

    return 0;
}