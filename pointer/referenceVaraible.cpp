#include <iostream>
using namespace std;
void fun(int &x)
{
    x++;
}
int main()
{
    /*
    int i = 5;
    int &j = i; // j is reference variable

    cout << "i : " << i << endl;
    cout << "j : " << j << endl;

    i++;
    cout << endl
         << "after increasing i :" << endl;

    cout << "i : " << i << endl;
    cout << "j : " << j << endl;

    j++;

    cout << endl
         << "after increasing i :" << endl;
    cout << "i : " << i << endl;
    cout << "j : " << j << endl;
    */

    int y = 6;
    fun(y);
    cout << y;
    return 0;
}