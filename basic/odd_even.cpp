#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    num % 2 == 0 ? cout << num << " is an even number" << endl : cout << num << " is a odd number" << endl;
    return 0;
}