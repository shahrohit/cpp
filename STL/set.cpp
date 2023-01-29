#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;

    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(3);

    for (auto e : s)
    {
        cout << e << endl;
    }
    return 0;
}