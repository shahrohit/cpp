#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    map<string, string> n;
    m[1] = "rohit";
    m[2] = "kumar";
    m[3] = "shah";

    n.insert({"fname", "Rohit"});
    n.insert({"Mname", "Kumar"});
    n.insert({"Lname", "Shah"});

    for (auto i : n)
    {
        cout << i.first << " : " << i.second << "\n";
    }
    return 0;
}