#include <iostream>
using namespace std;
int main()
{
    float x, y;

    cout << "Enter x-cordinate : ";
    cin >> x;
    cout << "Enter y-cordinate : ";
    cin >> y;

    if (x > 0 && y > 0)
    {
        cout << "(" << x << "," << y << ") lies in First quarant." << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "(" << x << "," << y << ") lies in Second quarant." << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "(" << x << "," << y << ") lies in third quarant." << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "(" << x << "," << y << ") lies in Fouth quarant." << endl;
    }
    else
    {
        cout << "(" << x << "," << y << ") lies is at origin." << endl;
    }

    return 0;
}