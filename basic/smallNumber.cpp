#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter 1st number : ";
    cin >> num1;
    cout << "Enter 2nd number : ";
    cin >> num2;

    if (num1 < num2)
    {
        cout << "Smallest Number is : " << num1;
    }
    else
    {
        cout << "Smallest Number is : " << num2;
    }

    return 0;
}