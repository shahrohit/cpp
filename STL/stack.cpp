#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> name;

    name.push("rohit");
    name.push("masoom");
    name.push("arjun");

    cout << name.top() << endl;
    cout << name.size() << endl;
    name.pop();
    cout << name.top();
    return 0;
}
