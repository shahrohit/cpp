#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 3};
    int key = 3;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == key)

        {
            cout << i;
            break;
        }
    }

    return 0;
}