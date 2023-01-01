#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter 1st number : ";
    cin >> num1;
    cout << "Enter 2nd number : ";
    cin >> num2;
    cout << "Enter 3rd number : ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << "Greatest Number is : " << num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "Greates Number is : " << num2;
    }
    else
    {
        cout << "Greatest Number is : " << num3;
    }

    return 0;
}