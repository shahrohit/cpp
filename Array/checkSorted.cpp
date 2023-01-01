#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 0, 5, 8};
    bool sorted = true;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i + 1] < v[i])
        {
            sorted = false;
            break;
        }
    }
    sorted ? cout << "Sorted" : cout << "not Sorted";
    return 0;
}