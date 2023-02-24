#include <iostream>
using namespace std;

void fun(int **q)
{
    // q = q + 1; // no change

    // *q = *q + 1; // change the value of p1 i.e. address of i

    // **q = **q + 1; // change the value of i
}
int main()
{
    int i = 5;

    int *p1 = &i;

    int **p2 = &p1;
    /*
        cout << "p1 : " << p1 << endl; // addres of i
        cout << "p2 : " << p2 << endl; // address of p1 pointer

        cout << "p1 : " << *p1 << endl; // value of i
        cout << "p2 : " << *p2 << endl; // value of p2= address of i
    */
    cout << endl;
    cout << " Before i : " << i << endl;
    cout << " Before p1: " << p1 << endl;
    cout << " Before p2 : " << p2 << endl;

    fun(p2);

    cout << endl;
    cout << " After i : " << i << endl;
    cout << " After p1: " << p1 << endl;
    cout << " After p2 : " << p2 << endl;

    cout << endl;
    return 0;
}