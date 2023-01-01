#include <iostream>
using namespace std;
int main()
{
    float angle;
    cout << "Enter angle : ";
    cin >> angle;
    // converting any angle in the range of 0 to 360
    int val = angle - 360 * (int)(angle / 360);

    if (val <= 90)
        cout << angle << "˚ lies in First quadrant." << endl;

    else if (val <= 180)
        cout << angle << "˚ lies in Second quadrant." << endl;

    else if (val <= 270)
        cout << angle << "˚ lies in Third quadrant." << endl;

    else
        cout << angle << "˚ lies in Fouth quadrant." << endl;

    return 0;
}