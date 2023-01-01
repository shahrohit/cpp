#include <iostream>
using namespace std;
int main()
{
    float initDisatnce, finalDistance, factor;
    int initSelect, finalSelect;

    cout << "**************************Distance Conversion****************************" << endl;

    cout << "1. Meter" << endl;
    cout << "2. Kilometer" << endl;
    cout << "3. Centimeter" << endl;
    cout << "4. Mile" << endl;
    cout << "5. Yard" << endl;
    cout << "6. Foot" << endl;
    cout << "7. Inch" << endl;

    cout << "Select from 1-7 : ";
    cin >> initSelect;

    switch (initSelect)
    {
    case 1:
        cout << "Enter the distance in meter : ";
        cin >> initDisatnce;
        finalDistance = initDisatnce;

        break;

    case 2:
        cout << "Enter the distance in Kilometer : ";
        cin >> initDisatnce;
        finalDistance = (initDisatnce * 1000);
        break;
    case 3:
        cout << "Enter the distance in Centimeter : ";
        cin >> initDisatnce;
        finalDistance = initDisatnce / 100.0;
        break;
    case 4:
        cout << "Enter the distance in Miles : ";
        cin >> initDisatnce;
        finalDistance = initDisatnce * 1609.0;
        break;
    case 5:
        cout << "Enter the distance in Yard : ";
        cin >> initDisatnce;
        finalDistance = initDisatnce / 1.094;
        break;
    case 6:
        cout << "Enter the distance in Foot : ";
        cin >> initDisatnce;
        finalDistance = initDisatnce / 3.218;
        break;
    case 7:
        cout << "Enter the distance in Inch : ";
        cin >> initDisatnce;
        finalDistance = initDisatnce / 39.37;
        break;
    default:
        break;
    }
    cout << "CHOOSE NEW DISTANCE :: " << endl;
    cout << "1. Meter" << endl;
    cout << "2. Kilometer" << endl;
    cout << "3. Centimeter" << endl;
    cout << "4. Mile" << endl;
    cout << "5. Yard" << endl;
    cout << "6. Foot" << endl;
    cout << "7. Inch" << endl;

    cout << "Select from 1-7 : ";
    cin >> finalSelect;

    switch (finalSelect)
    {
    case 1:
        break;
    case 2:
        finalDistance = finalDistance * 0.001;
        cout << "Final Distance : " << finalDistance << " km";

        break;
    case 3:
        finalDistance *= 100;
        cout << "Final Distance : " << finalDistance << " cm";
        break;
    case 4:
        finalDistance /= 1609.0;
        cout << "Final Distance : " << finalDistance << " miles";
        break;
    case 5:
        finalDistance *= 1.094;
        cout << "Final Distance : " << finalDistance << " yard";
        break;
    case 6:
        finalDistance *= 3.281;
        cout << "Final Distance : " << finalDistance << " foot";
        break;
    case 7:
        finalDistance *= 39.37;
        cout << "Final Distance : " << finalDistance << " inches";
        break;
    default:
        break;
    }

    return 0;
}