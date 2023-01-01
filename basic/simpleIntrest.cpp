#include <iostream>
using namespace std;
int main()
{
    float p, r, t;
    cout << "Enter sum(priciple) : ";
    cin >> p;
    cout << "Enter Rate of intrest : ";
    cin >> t;
    cout << "Enter time period in years : ";
    cin >> r;

    cout << "Intrest :: Rs. " << (p * t * r) / 100.0 << endl;

    return 0;
}