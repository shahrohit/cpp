#include <iostream>
using namespace std;
int main()
{
    int initcount, finalcount;
    float temp, finalTemp;
    cout << "******************Temperatur Conversion******************" << endl;
    cout << "Select the Temperature Scale :: " << endl;

    cout << "1. Celsius Scale (˚C) " << endl;
    cout << "2. Fahrenheit Scale (˚F)" << endl;
    cout << "3. Kelvin Scale (K)" << endl;
    cout << endl
         << "Choose your Temperature Scale (1,2,3) : ";
    cin >> initcount;
    switch (initcount)
    {
    case 1:
        cout << "Enter the temperature in ˚C : ";
        cin >> temp;
        break;
    case 2:
        cout << "Enter the temperature in ˚F :";
        cin >> temp;
        break;
    case 3:
        cout << "Enter the temperature in K :";
        cin >> temp;
        break;
    default:
        cout << "sorry ! Invalid input.";

        return 0;
    }

    cout << "Select the new Temperature Scale :: " << endl;

    cout << "1. Celsius Scale (˚C) " << endl;
    cout << "2. Fahrenheit Scale (˚F)" << endl;
    cout << "3. Kelvin Scale (K)" << endl;
    cout << endl
         << "Choose your new Temperature Scale (1,2,3) : ";
    cin >> finalcount;

    if (initcount == finalcount)
    {
        cout << "It is already in same temp scale";
    }
    else
    {
        if (initcount == 1 && finalcount == 2)
        {
            finalTemp = (9.0 / 5.0) * temp + 32;
            printf("%.2f ˚C = %.2f ˚F \n", temp, finalTemp);
        }
        else if (initcount == 1 && finalcount == 3)
        {
            finalTemp = temp + 273;
            printf("%.2f ˚C = %.2f K \n", temp, finalTemp);
        }
        else if (initcount == 2 && finalcount == 1)
        {
            finalTemp = (5.0 / 9.0) * (temp - 32);
            printf("%.2f ˚F = %.2f ˚C \n", temp, finalTemp);
        }
        else if (initcount == 2 && finalcount == 3)
        {
            finalTemp = (5.0 / 9.0) * (temp - 32) + 273;
            printf("%.2f ˚F = %.2f K \n", temp, finalTemp);
        }
        else if (initcount == 3 && finalcount == 1)
        {
            finalTemp = temp - 273;
            printf("%.2f K = %.2f C \n", temp, finalTemp);
        }
        else if (initcount == 3 && finalcount == 2)
        {
            finalTemp = (9.0 / 5.0) * (temp - 273) + 32;
            printf("%.2f K = %.2f ˚F \n", temp, finalTemp);
        }
        else
        {
            cout << "It is already in same temp scale";
        }
    }

    return 0;
}