#include <iostream>
using namespace std;
int main()
{
    int age;

    cout << "Enter age : ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are eligible to vote.";
    }
    else if (age > 0)
    {
        cout << "Sorry ! You are under 18. You can't vote.";
    }
    else
    {
        cout << "Invalid age.";
    }

    return 0;
}