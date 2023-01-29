#include <iostream>
#include <array>
using namespace std;
int main()
{
    // declearing array
    array<int, 5> a = {1, 2, 3, 4, 5};

    // size of array
    int size = a.size();
    cout << size << endl;

    // accessing elemets
    cout << a[2] << endl;
    cout << a.at(2) << endl;

    // check empty
    cout << a.empty() << endl;

    // front and back
    cout << a.front() << " " << a.back();
    return 0;
}